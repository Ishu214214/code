<?php
echo "we are printing the switch case";
$a=54;
switch($a)
{
    case 54:
        echo "hello";
        break;
    default:
        echo "hello";    
}
?>

<?php
///////////////////////////////////////////////////////////////////
echo "<br>///////////////////////////////////////////////////////////////////";
?>

<?php
echo "loop";
$name="i am writing the code in for loop";
$y=[5,6,6,7,8];
for($i=0;$i<5;$i++)
{
    echo "for loop excuted" ."<br>". $name[$i] ."<br>";
}
echo "foreach <br>";
foreach($y as $value)
{
    echo "<br>".$value;
}
?>

<?php
///////////////////////////////////////////////////////////////////
echo "<///////////////////////////////////////////////////////////////////";
?>

<?php
echo "<br><pre>                while                   </pre>";
while($a>5 && $a<55)
{
    echo $a."<br>we have succesfull excuted while loop<br>";
    $a++;
}

?>





<?php
///////////////////////////////////////////////////////////////////
echo "///////////////////////////////////////////////////////////////////<br>";
?>

<?php
echo "<br> fo do while loop";
do
{
echo "<br> we are in do while loop";

}while($a<0);

?>