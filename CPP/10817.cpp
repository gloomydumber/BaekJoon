// https://www.acmicpc.net/problem/10817

#include <iostream>

using namespace std;

int main(void)
{
  int a, b, c;
  while(1)
  {
    cin>>a>>b>>c;

    if(a>=1&&a<=100&&b>=1&&b<=100&&c>=1&&c<=100)
      break;
  }

  if(a > b){
         if(c > a)
         {
             cout<<a;
             return 0;
         }
         else if(c > b)
         {
             cout<<c;
             return 0;
         }
         else
         {
             cout<<b;
             return 0;
         }
         if(b > c)
         {
             cout<<b;
             return 0;
         }
         else if(a > c)
         {
             cout<<c;
             return 0;
         }
         else{
             cout<<a;
             return 0;
         }
     }
     else{
         if(c > b)
         {
             cout<<b;
             return 0;
         }
         else if( c > a)
         {
             cout<<c;
             return 0;
         }
         else{
             cout<<a;
             return 0;
         }
         if(a>c)
         {
             cout<<a;
             return 0;
         }
         else if(b>c)
         {
             cout<<c;
             return 0;
         }
         else{
             cout<<b;
             return 0;
         }
     }
}
