 class Base
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

}

//public drive extends Base
 class Drive extends Base
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

}


public class class_and_object
{
    public static void main(String[] args)
     {
     
       Base ishu = new Base();
       ishu.setX(1);
       System.out.println(ishu.getX());
       
       
       Drive drive = new Drive();
       drive.setX(3);
       drive.setY(8);
       System.out.println(drive.getX());
       System.out.println(drive.getY());






    }
}