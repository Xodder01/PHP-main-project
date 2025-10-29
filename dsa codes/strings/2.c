<html>
<body>
<form method="post" action="">
Number 1: <input type="text" name="num1"><br>
Number 2: <input type="text" name="num2"><br>
<input type="submit" value="Add">
</form>
<?php
if($_POST){
$sum = $_POST['num1'] + $_POST['num2'];
echo "Sum = $sum";
}
?>
</body>
</html>