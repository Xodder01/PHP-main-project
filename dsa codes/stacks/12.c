<?php
$str = "Hello World";
echo strcmp("abc", "abd") . "\n";
echo substr($str, 0, 5) . "\n";
echo (strpos($str, "World") !== false) ? "Found\n" : "Not Found\n";
?>