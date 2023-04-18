<?php
echo "printing the multi dimensional array<br>";
$y=array( array(5,6,7  )         , 
          array(1,2,3  )        , 
          array(9,8,7   )
         );
         echo "<br>".var_dump($y[0])  ."<br>" ;
        
         echo "<br>" . $y[0][0]  .  "<br>" ;



$y=          array( array(           array(1,2,3) ,array(9,8,7) )         , 
                    array(           array(9,8,7) ,array(9,8,7))        , 
                    array(           array(5,6,7)  ,array(9,8,7)   )
         );


     
         echo "<br>" . $y[0][1][0]  .  "<br>" ;
       #  echo "<br>" . $y[0][0]  .  "<br>" ;
        # echo "<br>" . $y[0][1][0][0]  .  "<br>" ;



?>