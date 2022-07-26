import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.*;
import java.io.FileReader;
import java.util.Scanner;
import java.io.FileNotFoundException;
class filehandeling_concept{
     public static void main(String[] args) {
         try {
             
                                                  // code is for write in the file
             FileWriter writer =new FileWriter("ishu.txt");
             writer.write("hey we are in side  the file and write the code ");
             writer.close();

            

            /* 
                                                  // code for creat the file
            File myfile =new File("ishu.txt");

*/

            /*
             //code for read the program

            */ 
            File myfile =new File("ishu.txt");
            Scanner sc =new Scanner(myfile);
            sc.close();
            
            //  hear delet the file
            
        //     File myfile =new File("ishu.txt");
        //    myfile.delete();
               
         } 
         catch (Exception e) {
                       System.err.println("error generate");
         }



     }
 }