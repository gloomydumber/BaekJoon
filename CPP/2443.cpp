// https://www.acmicpc.net/problem/2443
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  cin>>N;
  int blank=0;
  int nofstar=2*N-1;
  while(nofstar>0)
  {
    for(int j=0; j<blank/2; j++)
      cout<<' ';
    for(int i=0; i<nofstar; i++)
      cout<<'*';
    //for(int j=0; j<blank/2; j++) // *만찍고 말어라..
      //cout<<' ';                 // 출력형식이 잘못되었습니다.
    blank+=2;
    nofstar-=2;
    if(nofstar>0)
      cout<<'\n';
  }
  return 0;
}
