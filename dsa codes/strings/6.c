<?php
$conn = mysqli_connect('localhost', 'root', '', 'school');
if($conn){
echo 'Database connected successfully';
}else{
echo 'Connection failed';
}
?>