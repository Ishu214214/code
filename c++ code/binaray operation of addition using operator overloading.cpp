
#include<iostream.h>  
using namespace std;
 class complex   
{
 public:
   
 void getdata();   // member function
 void display();

    class hello
    {
        public:
         float real;
         float real1;  
         
         void get()
         {
            cout<<"\n enter real";
            cin>>real>>real1;
         }
         void displ()
         {
            cout<<"\n display"<<real<<real1;
         }
         hello operator + (const hello &c2);
         hello::hello()
        {
        real=0.0;  
        real1=0.0; 
         }
    };                 
};

 complex ::hello complex ::hello:: operator + (const hello &c2)
{
hello c1,c3;
c3.real = real1 +real;
return c3; 
}                   
int main()
{
    complex :: hello x,y,z;            
    
    x.get();
    z=x +y;              
    z.displ();
     return 0;
}
