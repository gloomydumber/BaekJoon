// https://www.acmicpc.net/problem/2742

#include <iostream>

using namespace std;

int main(void)
{
  int n;

  while(1)
  {
    cin>>n;

    if(n>=1&&n<=100000)
      break;
  }

  for(int i=n; i>0; i--)
    cout<<i<<'\n';



  return 0;
}
