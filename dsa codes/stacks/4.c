<?php
function factorial($n) {
    if ($n == 0)
        return 1;
    else
        return $n * factorial($n - 1);
}
echo "Factorial of 5: " . factorial(5) . "\n";
?>