<html>
<body>
<form method="post" action="">
Enter Name to Delete: <input type="text" name="name"><br>
<input type="submit" value="Delete">
</form>
<?php
if($_POST){
$conn = mysqli_connect('localhost','root','','school');
$sql = "DELETE FROM students WHERE name='$_POST[name]'";
if(mysqli_query($conn, $sql)){
echo 'Record deleted successfully';
}else{
echo 'Deletion failed';
}
}
?>
</body>
</html>