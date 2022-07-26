class mythread1 extends Thread
{
   // Override
     public void run() 
     {
         int i=0 ;
         while( i < 1000)

         {
	             System.out.println("hello") ;
	i++;
	            }
	        }
		    }
	class mythread2 extends Thread
	{
		public void run() 
		{
			// Override
			int i=0 ;
			while( i < 1000)
					{
				System.out.println("00000000000000000000") ;
				i++;
			}
		}}
		class mythread3 extends Thread
		{
			public void run() {
				// Override
				int i=0 ;
				while( i < 1000)
				
				{
					System.out.println("ishu") ;
					i++;
				}
			}}
			class mythread4 extends Thread
			{
				public void run() {
					//  Override
					int i=0 ;
	while( i < 1000)
	{
		System.out.println("@#$%^&*") ;
		i++;
	}
}}
	class mythread5 extends Thread
	{
		public void run() {
			// Override
			int i=0 ;
			while( i < 1000)
			{
				System.out.println("45556") ;
				i++;
			}
		}}
        
class thread
{
public static void main(String[] args) {
    mythread1 t1 =new mythread1();
	mythread2 t2 =new mythread2();
	mythread3 t3 =new mythread3();
	mythread4 t4 =new mythread4();
	mythread5 t5 =new mythread5();
    t1.start();
	t2.start();
	t3.start();
	t4.start();
	t5.start();
}
}