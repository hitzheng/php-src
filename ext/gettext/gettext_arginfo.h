/* This is a generated file, edit the .stub.php file instead. */

ZEND_BEGIN_ARG_INFO_EX(arginfo_textdomain, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_gettext, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, msgid, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dgettext, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, domain_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dcgettext, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, domain_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, category, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_bindtextdomain, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, domain_name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_STRING, 0)
ZEND_END_ARG_INFO()

#if HAVE_NGETTEXT
ZEND_BEGIN_ARG_INFO_EX(arginfo_ngettext, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, msgid1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if HAVE_DNGETTEXT
ZEND_BEGIN_ARG_INFO_EX(arginfo_dngettext, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if HAVE_DCNGETTEXT
ZEND_BEGIN_ARG_INFO_EX(arginfo_dcngettext, 0, 0, 5)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msgid2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, category, IS_LONG, 0)
ZEND_END_ARG_INFO()
#endif

#if HAVE_BIND_TEXTDOMAIN_CODESET
ZEND_BEGIN_ARG_INFO_EX(arginfo_bind_textdomain_codeset, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, codeset, IS_STRING, 0)
ZEND_END_ARG_INFO()
#endif
