//UNARY STREAM operator overloading function using frind function
// we are creating the two data member which are pribate and access them to stream class
//iostream header file are having define istream or ostream return type to take the value of cin and cout
//we are using this to give multiple value to the vaibal in the program 
//we are not changing the program but we are modifying the program using stream class
       //here we are dinfing the pree header file of stream class
#include<iostream>
//#include<fstream.h> 
using namespace std;
class hi
{
    private:
    int a;
    int b;
    public:
      hi();
      hi(int  ,int );
      ~hi();
      friend ostream& operator << (ostream &dout ,hi obj);
      friend istream& operator >> (istream &din ,hi obj);
};
hi::hi()
{
    a=0;
    b=0;
}
hi::hi(int x,int y)
{
    a=x;
    b=y;
}
hi::~hi()
{
    cout<<"\n hello";
}
   ostream& operator << (ostream &dout ,hi obj)
  {
      dout<<obj.a;
      dout<<obj.b;
      return dout;
  }
 istream& operator >> (istream &din ,hi obj)
    {
        din>>obj.a;
        din>>obj.b;
        return din;
    }
    int main()
    { 
        
        hi a1(2,4);
        hi a2(3,6);
        cout<<a1<<"\n"<<a2;
        cin>>a1;
        cin>>a2;
        cout<<a1<<"\n"<<a2;
        return 0;
    }
