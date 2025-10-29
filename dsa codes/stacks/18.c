<?php
$arr = array("x", "y", "z");
echo current($arr) . "\n";
next($arr);
echo current($arr) . "\n";
end($arr);
echo current($arr) . "\n";
reset($arr);
echo current($arr) . "\n";
?>