<?php
setcookie("user", "Yaman", time()+3600);
if(isset($_COOKIE['user'])){
echo "Cookie Value: " . $_COOKIE['user'];
}else{
echo "Cookie Created";
}
?>