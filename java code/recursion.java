public class recursion 
{
    
    /** 
     * @param x
     * @return int
     */
    static int rec(int x)
    {
        if(x==0 || x==1) 
        {
            return 1;
        } 
        else
        {
           // rec = x*rec(x-1);
            return x*rec(x-1);
        }
    }
    
    /** 
     * @param args
     */
    public static void main(String[] args) 
    {
     
        int a=5;
        //rec(a);
        System.out.println(rec(a));

    }
    
}
