<?php
echo "we are creating database with out using mysql we are creating data base using php";
$servername="localhost";
$username = "root";
$password ="";
$database = "dbharry";


$conn =mysqli_connect($servername, $username ,$password,$database);                  //conn == con bath are same becouse we are assining the value

if(!$conn)
{
    die( "<br> we  are having the error in the code" . mysqli_connect_error());
}
else{
    echo "<br> we have succesfully connect the conn";
}







$sql = "CREATE TABLE `name` ( `name` VARCHAR(50) NOT NULL , `roll_no` INT(11) NOT NULL AUTO_INCREMENT , `class` INT(11) NOT NULL , `age` INT(11) NOT NULL , PRIMARY KEY (`roll_no`)) ENGINE = InnoDB;
";             //sql or sqllllllll are same becouse both are same we are passing the value

$result = mysqli_query($conn ,$sql);

//echo var_dump($result);         //chaking the connection

if(!$result)
{
    echo "<br> connection fail<br>".mysqli_error($conn);
}
else{
    echo "connection sucessfullt";
}

?>