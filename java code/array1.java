import java.util.Scanner;

public class array1 {
    private static Scanner sc;

    
    /** 
     * @param args
     */
    public static void main(String[] args) {
        System.out.println("enter the out put method");
        sc = new Scanner(System.in);

      /*  int a[] = new int[5];
        int i;
        for (i = 0; i < 5; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("here is the out put");
        for (i = 0; i < 5; i++) {
            System.out.println(a[i]);
            
        }
        */
        int i ,j;
        int x[][] = new int[2][2];
        //int y[] = new int[2];
        //int ;
        for (i = 0; i < 2; i++) 
        {
           // x[i] = sc.nextInt();
            
            for (j = 0; j < 2; j++)
            {
                x[i][j] = sc.nextInt();
            }
        }
        
        System.out.println("here is the out put");
        for (i = 0; i < 2; i++) 
        {
            
           // System.out.println(x[i]);
            
            // for (i = 0; i < 2; i++)
            for (j = 0; j < 2; j++)
            {
                
                System.out.print(x[i][j]);
            }
        }



/*
        System.out.println("print");
        float b[] = { 6.5f, 6.6f, 6.6f, 6.3f };
        System.out.println("print the out put");
        System.out.println(b.length);
        System.out.println(b[2]);
        */

    }
}