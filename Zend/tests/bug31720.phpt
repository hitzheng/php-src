--TEST--
Bug #31720 (Invalid object callbacks not caught in array_walk())
--FILE--
<?php
$array = array('at least one element');

try {
    array_walk($array, array($nonesuchvar,'show'));
} catch (TypeError $e) {
    echo $e->getMessage(), "\n";
}
?>
===DONE===
--EXPECTF--
Warning: Undefined variable: nonesuchvar in %s on line %d
array_walk() expects parameter 2 to be a valid callback, first array member is not a valid class name or object
===DONE===
