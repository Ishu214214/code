interface Cycle1
{
    // int a=45;
    // void horn();
   // void type();
    // default void loda()
    // {
    //     System.out.println("loda");
    // }

}
// interface bike1
// {
//     void moudel();
//     void price();
// }
class hello1 implements Cycle 
{
   
    public void type()
    {
        System.out.println("2");
    }
    public void horn()
    {
        System.out.println("1");
    }
    // default void loda()
    // {
    //     System.out.println("loda");
    // }

    // public void moudel()
    // {
    //     System.out.println("3");
    // }
    // public void price()
    // {
    //     System.out.println("4");
    // }

}


public class default_methode
 {
public static void main(String[] args) {
    
    hello1 ishu =new hello1();
//System.out.println(ishu.a);
ishu.horn();
}
    
}
