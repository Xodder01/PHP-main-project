<?php
$arr=array(1,2,3,4,5);
foreach($arr as &$v)$v++;
print_r($arr);
?>