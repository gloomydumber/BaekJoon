// https://www.acmicpc.net/problem/8393

#include <iostream>

using namespace std;

int main(void)
{
  int n;
  int sum=0;

  while(1)
  {
    cin>>n;

    if(n>=1&&n<=10000)
      break;
  }

  for(int i=0; i<n+1; i++)
    sum+=i;

  cout<<sum<<endl;

  return 0;
}
