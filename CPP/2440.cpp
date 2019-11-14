// https://www.acmicpc.net/problem/2440

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  cin>>N;
  int cnt=N;
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<cnt; j++)
    {
      cout<<'*';
    }
    cnt--;
    cout<<'\n';
  }

  return 0;
}
