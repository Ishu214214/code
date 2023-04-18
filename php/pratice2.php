<?php
echo "function<br>";
function total($b)
{
    $sum=0;
    foreach($b as $value)
    {
        $sum +=$value;
   }
    return $sum;
}
#echo $a;            //not work
#echo $b;
// echo $sum;
// echo $result;
$a=[1,2,3,4,5,6,7,8,9,];

$result=total($a);
echo $result;           //not work
#echo $b;




?>