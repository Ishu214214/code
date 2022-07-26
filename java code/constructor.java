class Base1
{
     int a;
    
    /** 
     * @param x
     */
    public void setX(int x)
    {
         a = x;
        
    }
    
    /** 
     * @return int
     */
    public int getX()
    {
        return a;
    }
    Base1()
    {
        System.out.println("hello world lllllllllllllllllll");
    }
    Base1(int x)
    {
        System.out.println(x);
    }

}

//public drive extends Base
 class Drive1 extends Base1
{
    int b;
    public void setY(int y)
    {
     b = y;
    }
    public int getY()
    {
        return b;
    
    }
    Drive1()
    {
        System.out.println("hello worldaaaaaaaaaaaaaaaaaaaaaaaa");
    }
    Drive1(int x, int y)
    {
       super(5);
        System.out.println(x+y);
    }


}


public class constructor
{
    public static void main(String[] args)
     {
     
      //  Base1 ishu = new Base1();
        Base1 ishu = new Drive1(5,5);               //here is print in  drive class 

                                        //dynamic method

       // Drive1 drive = new Drive1();
      // Base1 ishu = new Base1( 5);
     //  Drive1 drive = new Drive1( 5, 10);
      





    }
}