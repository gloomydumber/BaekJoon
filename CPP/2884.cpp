// https://www.acmicpc.net/problem/2884

#include <iostream>

using namespace std;

int main(void)
{
  int h, m;
  while(1)
  {
    cin>>h>>m;

    if(h>=0&&h<=23&&m>=0&&m<=59)
      break;
  }


  if(m<45)
  {
    h=h-1;
    m+=15;
  }
  else
  {
    m-=45;
  }


  if(h==-1)
  {
    h=23;
  }

    cout<<h<<' '<<m<<endl;


  return 0;
}
