<?php
$arr = array(10, 20, 30);
foreach ($arr as $value) {
    echo $value . "\n";
}
reset($arr);
while ($value = current($arr)) {
    echo $value . "\n";
    next($arr);
}
?>