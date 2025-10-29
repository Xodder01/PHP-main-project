<?php
session_start();
ini_set('session.gc_maxlifetime', 3600);
echo "Session expiry increased to 1 hour";
?>