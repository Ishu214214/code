public class virtual_argument 
{
   
   /** 
    * @param ...arr
    * @return int
    */
   static int sum(int ...arr)
   {
       int result = 0;
       for(int a :arr) 
       {
           result += a;
       }
       return result;
   }

   
   /** 
    * @param args
    */
   //public static void main
   public static void main(String[] args) {
       int x;
       x= sum( 4,5,6,7,8,9,10,11,12,13,14,15);
       System.out.println(x);
   }
    
}
