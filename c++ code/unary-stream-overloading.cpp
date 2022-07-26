//unary-stream-overloading
#include<iostream>
using namespace std;
class name
{
   public:
   int x,y;
  name()
  {
      x=0;
      y=0;
  }
  name(int a,int b)
  {
      x=a;
      y=b;
  }
  ~name ()
  {
      cout<<"\n call";
  }
  void operator ++ ( )
  {
      x++;
      y++;
  }
};
int main()
{
    name n;
    cout<<n.x<<"\n"<<n.y;
   // n++ ;
  //  cout<<n.x<<"\n"<<n.y;
 //cout<<n(2,4);
    return 0;
}