//tryblock_exception
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    //cin ka value nahe lata ha to direct ans ve aaya ga 
    //ans direct -1 aaya ga
    cin>>a>>b;
    c=a-b;
    try
    {
        if(c!=0)
        {
            cout<<a/c;
        }
        else
        {
            throw (c);
        }
    }
     
     catch (int i)
     {
         cout<<c;
     }

    return 0;
}