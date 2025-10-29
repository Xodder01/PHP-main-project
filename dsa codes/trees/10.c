<?php
$file = fopen("sample.txt", "w");
fwrite($file, "Hello PHP File Handling");
fclose($file);
echo "Data written to file";
?>