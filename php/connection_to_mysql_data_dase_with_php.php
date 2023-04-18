<?php
echo "we are try to connet the my php into data base with the help of m;ysql";
$servername = "localhost";
$username = "root";
$password = "";
$conn = mysqli_connect($servername , $username ,$password);           //conn are used to connection

if(!$conn)
{
    die("<br> sory we dont connect".mysqli_connect_error());

}
else{
    echo "<br> we have succesfull connect";
}




?>