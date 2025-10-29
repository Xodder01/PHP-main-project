<?php
$a=10;
$b=25;
$c=15;
if($a>$b&&$a>$c)$max=$a;elseif($b>$a&&$b>$c)$max=$b;else $max=$c;
echo $max," is largest\n";?>