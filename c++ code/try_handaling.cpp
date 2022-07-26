//try_handaling
#include<exception>
#include<iostream>
using namespace std;
   int z;
int divide(int x,int y)
{
 
    if(y!=0)
    {
        //throw "fldkjgheoi;rhjgo;iehrg";
           // throw (1) ;
             z=x/y;
    }
    else
    {
      //  z=x/y;
      throw (1) ;
    }
    return z;
}

int main()
{
    int a,b,c,i;
    cin>>a>>b;
    try
    {
       c=divide(a,b);
       cout<<c;
    }
    catch(int i)
    {
        cout<<z;
    }
    catch (exception e)
    {
        e.what();
    }


    return 0;
}
