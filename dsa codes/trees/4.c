<?php
session_start();
$_SESSION['username'] = "Yaman";
$_SESSION['role'] = "Admin";
echo "Session started and variables stored";
?>