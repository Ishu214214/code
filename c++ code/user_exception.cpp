//user_exception
#include<iostream>
#include<exception>
using namespace std;  
class MYEXP :public exception
{
    public:
    const char*what() const throw()
    {
        return "my exception";
    }
};  
int main()
{
    int x,y;
    try
    {
        cout<<"\n enter the number";
        cin>>x>>y;
        if(y==0)
        {
            MYEXP a;
            throw a;   // throw e;        throw (e)
        }
        else
        {
            cout<<x/y;
        }
    }
    catch(exception e)
    {
        cout<<e.what();
    }
    return 0;
}