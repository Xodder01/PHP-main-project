<?php
$a = 10;
function showScope() {
    $a = 5;
    echo "Local variable a: $a\n";
}
showScope();
echo "Global variable a: $a\n";
?>