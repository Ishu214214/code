public class assscesifire 
{
    static class asssces
    {
      //   int id;
        // String name;
       private int id;
       private String name;
       // public char[] getName;
        //public char[] getid;

        public void setId(int a)
        {
            id =a;
        }
        public void setName(String c)
        {
            name = c;
        }
        public String getName()
        {
            return name;
        }
        public int getid()
        {
            return id;
        }


    }

    
    /** 
     * @param args
     */
    public static void main(String[] args) 
    {
        asssces ishu =new asssces();
        ishu.setName("RAM");
        ishu.setId(5);
       System.out.println(ishu.getName());
        System.out.println(ishu.getName());
        System.out.println(ishu.getid());

        
    }
    
}
