<?php
$dir = scandir(".");
foreach($dir as $file){
echo $file."\n";
}
?>