public class try {
    
    /** 
     * @param args
     */
    public static void main(String[] args) {
        int a=10;
        int b=0;
        try {
            int c =a/b;
        } catch (Exception e) {
            System.err.println(e);
            System.err.println(message);
            System.err.println(e);
        }

    
    }
    
}
