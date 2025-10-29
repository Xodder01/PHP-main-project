<?php
$conn = mysqli_connect('localhost','root','','school');
$result = mysqli_query($conn, "SELECT * FROM students");
echo '<table border=1>';
while($row = mysqli_fetch_assoc($result)){
echo '<tr><td>'.$row['name'].'</td><td>'.$row['age'].'</td></tr>';
}
echo '</table>';
?>