// https://www.acmicpc.net/problem/2739

#include <iostream>

using namespace std;

int main(void)
{
  int N;
  while(1)
  {
    cin>>N;
    if(N>=1&&N<=9)
      break;
  }

  for(int i=1;i<10;i++)
    cout<<N<<" * "<<i<<" = "<<N*i<<endl;
}
