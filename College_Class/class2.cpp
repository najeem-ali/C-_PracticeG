#include <iostream>
using namespace std;
#include <cmath>
int main()
{
  char ch;
    float a,b,r;
  cin>>a>>b>>ch;
  switch(ch)
  {
    case '+':
    r=a+b;
    cout<<r;
    break;
    case '-':
    r=a-b;
    cout<<r;
    break;
    case '*':
    r=a*b;
    cout<<r;
    break;
    case '/':
    r=a/b;
    cout<<r;
    break;
    default :
    cout<<"Wrong Input";
    
  }
   
    



}