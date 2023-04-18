<?php
$servername = "localhost";
$username = "root";
$password = "";
$database ="dbharry";
$conn = mysqli_connect($servername, $username, $password ,$database );
if(!$conn)
{
    die("<br> sorry to connection failur".mysqli_connect_error());
}
else{
    echo "<br>Success fully connert with the data baseeeeeeeeeeeeeeeee";
}

$sql = "DELETE FROM `phptrip` WHERE `phptrip`.`sno` = 2";

$result = mysqli_query($conn ,$sql);

if($result)
{
    echo "<br>sucessfull";
}
else{
    echo "<br>unsucessfull";

}

$aff = mysqli_affected_rows($conn);
echo "<br> " . $aff;


?>