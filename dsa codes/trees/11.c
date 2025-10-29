<?php
$file = fopen("sample.txt", "r");
echo fread($file, filesize("sample.txt"));
fclose($file);
?>