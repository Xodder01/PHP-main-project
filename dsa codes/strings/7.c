<?php
$conn = mysqli_connect('localhost','root','','school');
$sql = "INSERT INTO students (name, age) VALUES ('Yaman', 21)";
if(mysqli_query($conn, $sql)){
echo 'Record inserted successfully';
}else{
echo 'Error inserting record';
}
?>