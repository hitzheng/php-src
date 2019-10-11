/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Authors: Christian Stocker <chregu@php.net>                          |
   |          Rob Richards <rrichards@php.net>                            |
   +----------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#if HAVE_LIBXML && HAVE_DOM
#include "php_dom.h"

/* {{{ arginfo */
ZEND_BEGIN_ARG_INFO_EX(arginfo_dom_entityreference_construct, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO();
/* }}} */

/*
* class DOMEntityReference extends DOMNode
*
* URL: https://www.w3.org/TR/2003/WD-DOM-Level-3-Core-20030226/DOM3-Core.html#ID-11C98490
* Since:
*/

const zend_function_entry php_dom_entityreference_class_functions[] = {
	PHP_ME(domentityreference, __construct, arginfo_dom_entityreference_construct, ZEND_ACC_PUBLIC)
	PHP_FE_END
};

/* {{{ proto DOMEntityReference::__construct(string name) */
PHP_METHOD(domentityreference, __construct)
{
	xmlNode *node;
	xmlNodePtr oldnode = NULL;
	dom_object *intern;
	char *name;
	size_t name_len, name_valid;

	if (zend_parse_parameters_throw(ZEND_NUM_ARGS(), "s", &name, &name_len) == FAILURE) {
		return;
	}

	name_valid = xmlValidateName((xmlChar *) name, 0);
	if (name_valid != 0) {
		php_dom_throw_error(INVALID_CHARACTER_ERR, 1);
		RETURN_FALSE;
	}

	node = xmlNewReference(NULL, (xmlChar *) name);

	if (!node) {
		php_dom_throw_error(INVALID_STATE_ERR, 1);
		RETURN_FALSE;
	}

	intern = Z_DOMOBJ_P(ZEND_THIS);
	if (intern != NULL) {
		oldnode = dom_object_get_node(intern);
		if (oldnode != NULL) {
			php_libxml_node_free_resource(oldnode );
		}
		php_libxml_increment_node_ptr((php_libxml_node_object *)intern, node, (void *)intern);
	}
}
/* }}} end DOMEntityReference::__construct */

#endif
