<html>
<body>
<form method="post" action="">
Enter your name: <input type="text" name="name">
<input type="submit" value="Submit">
</form>
<?php
if($_POST){
echo "Hello " . $_POST['name'];
}
?>
</body>
</html>