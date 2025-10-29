<?php
$file = "sample.txt";
echo "Readable: ".(is_readable($file)?'Yes':'No')."\n";
echo "Writable: ".(is_writable($file)?'Yes':'No');
?>