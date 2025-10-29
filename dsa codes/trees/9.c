<?php
session_id("custom123");
session_start();
$_SESSION['status'] = "Active";
echo "Session started without cookies. ID: ".session_id();
?>