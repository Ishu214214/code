<?php
echo "we are creating database with out using mysql we are creating data base using php";
$servername="localhost";
$username = "root";
$password ="";
$database = "contact";

$conn =mysqli_connect($servername, $username ,$password,$database);                  //conn == con bath are same becouse we are assining the value

if(!$conn)
{
    die( "<br> we  are having the error in the code" . mysqli_connect_error());
}
else{
    echo "<br> we have succesfully connect the conn";
}


$result = mysqli_query($conn,$sql);

// now ve have display the data which we have insert the data in data base

echo "<br> we have display the data<br>";

$num = mysqli_num_rows($result);
echo $num ."<br>";

while($row = mysqli_fetch_assoc($result))
{
    echo var_dump($row) ;
    echo "<br>";
}
?>