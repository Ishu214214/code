<?php
 

$a="7";
#$a='5';
#$a=9;
echo $a."<br>";
echo 3+5 . "<br>";
if ($a > 4)
{
    echo "hi   $a and $a "  ." <br>";
}

$b= array("a","b","c");
echo $b[0] ."<br>" . $b[1]  . "<br>";
#echo $b[0] ."<br>" . $b[4] . "<br>";

var_dump($b);

$j=true;
var_dump($j);
echo  "<br>" . str_word_count($j) . "<br>";
$k=false;
var_dump($k);

$r=null;
var_dump($r);
echo  "<br>";
$name = "ishu";
echo strrev($name);
echo  "<br>"; 
echo strpos( $name , "i");
echo  "<br>"; 
echo str_replace("ishu" ,"hi" ,$name);


?>