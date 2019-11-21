// https://www.acmicpc.net/problem/2438
#include <iostream>

using namespace std;

int main(void)
{
  int n;
  while(1)
  {
    cin>>n;

    if(n>=1&&n<=100)
      break;
  }

for(int i=1;i<n+1;i++)
{
  for(int j=0;j<i;j++)
  {
    cout<<'*';
  }
  cout<<endl;
}
  return 0;
}
