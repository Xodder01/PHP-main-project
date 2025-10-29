<html>
<body>
<form method="post" action="">
Enter Name to Update: <input type="text" name="name"><br>
Enter New Age: <input type="text" name="age"><br>
<input type="submit" value="Update">
</form>
<?php
if($_POST){
$conn = mysqli_connect('localhost','root','','school');
$sql = "UPDATE students SET age='$_POST[age]' WHERE name='$_POST[name]'";
if(mysqli_query($conn, $sql)){
echo 'Record updated successfully';
}else{
echo 'Update failed';
}
}
?>
</body>
</html>