#include <iostream>
using namespace std;
#include <cmath>
int main()
{
  int a,b,ch,r;
  cin>>a>>b>>ch;
  switch(ch)
  {
    case 1:
    r=a+b;
    cout<<r;
    break;
    case 2:
    r=a-b;
    cout<<r;
    break;
    case 3:
    r=a*b;
    cout<<r;
    break;
    case 4:
    r=a/b;
    cout<<r;
    break;
    default :
    cout<<"Wrong Input";
    
  }
   
    



}