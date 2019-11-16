// https://www.acmicpc.net/problem/2441

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N;
    int cnt;
    cin>>N;
    cnt=N;
    for(int i=0; i<N; i++)
    {
      for(int j=0; j<cnt; j++)
      {
        cout<<"*";
      }
      cout<<'\n';
      cnt--;
      for(int j=0; j<N-cnt; j++)
      {
        cout<<' ';
      }
    }
    return 0;
}
