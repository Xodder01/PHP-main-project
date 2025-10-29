<?php
$g=5;
function test(){
    global $g;
    static $c=0;
    $c++;$l=10;
    echo $g+$l+$c,"\n";
    }
    test();
    test();
    ?>