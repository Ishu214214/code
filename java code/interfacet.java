interface Cycle
{
    int a=45;
    void horn();
    void type();

}
interface bike
{
    void moudel();
    void price();
}
class hello implements Cycle , bike
{
    public void horn()
        {
            System.out.println("1");
        }
    
    public void type()
    {
        System.out.println("2");
    }

    public void moudel()
    {
        System.out.println("3");
    }
    public void price()
    {
        System.out.println("4");
    }

}


public class interfacet
 {
public static void main(String[] args) {
    
    hello ishu =new hello();
System.out.println(ishu.a);
ishu.moudel();
}
    
}
