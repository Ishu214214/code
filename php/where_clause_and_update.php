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

//``````````````````````````````````where clause will be used `````````````````````````````````````
$sql = "SELECT * FROM `phptrip` WHERE `dest`='Bihar'";

$result = mysqli_query($conn ,$sql);
$num = mysqli_num_rows($result);
if($result)
{
    echo "<br>successfull connect";
}
else 
{
    echo "<br>unsuccesfully connection";
}
echo "<br>".$num;
$no=1;
if($num>0)
{
    while($row = mysqli_fetch_assoc($result))
    {
        //echo "<br> " . $no . "  name  " . $row['name'] . " here destination" . $row['dest'];
        echo         "<br>".  $no .  ". Hello ". $row['name'] ." Welcome to ". $row['dest'];
        $no = $no+1;
    }
}

//``````````````````````````````update quarry will be used ``````````````````````````````````
$sql = "Update `phptrip` set `name` = 'kumar' Where `dest` = 'Bihar'";
$result = mysqli_query($conn ,$sql);
$aff = mysqli_affected_rows($conn);
echo "<br> " . $aff;

if($result)
{
    echo "<br>sucessfull";
}
else{
    echo "<br>unsucessfull";

}






?>