public class class_eg 
{
   static class Emplo
    {
        int id;
        int age;
        String name;
        //display name
        public void display()
        {
            System.out.println(name);
        }
    }

    
    /** 
     * @param args
     */
    public static void main(String[] args) 
    {
     Emplo ishu = new Emplo();
     //Object ishu = new Object();     //object
     ishu.id=15;
     ishu.age=20;
     ishu.name="HELLO";
     System.out.println(ishu.id);
     System.out.println(ishu.age);
     ishu.display();

     
        
    }
    
}
