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
else
{
    echo "<br> we have succesfully connect the conn";
}

$sql = "INSERT INTO `contacts` (`name`, `email`, `concern`) VALUES ('hey', 'ishu@gmail.com', '12'); ";
 //sql or sqllllllll are same becouse both are same we are passing the value

$result = mysqli_query($conn ,$sql);

//echo var_dump($result);         //chaking the connection

if(!$result)
{
    echo "<br> connection fail<br>".mysqli_error($conn);
}
else{
    echo "<br>connection sucessfullt";
}


//.................now we are taking varibal and then insert the value in the table .........


$name_t = "ishu";
$class_t = "11@gmail.com";
$age_t  ="11";
$sql = "INSERT INTO `contacts` (`name`, `email`, `concern`) VALUES ('$name_t',' $class_t',' $age_t') ";


$result = mysqli_query($conn ,$sql);

?>