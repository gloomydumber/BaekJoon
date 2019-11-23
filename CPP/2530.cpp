// https://www.acmicpc.net/problem/2530
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int H,M,S;
  int cooktime;
  int cookhour;
  int cookminute;

  cin>>H>>M>>S;
  cin>>cooktime;

  cookhour=cooktime/3600;
  H+=cookhour;
  cooktime=cooktime-(cookhour*3600);

  cookminute=cooktime/60;
  M+=cookminute;
  cooktime=cooktime-(cookminute*60);

  S+=cooktime;

  while(S>=60)
  {
    S-=60;
    M+=1;
  }

  while(M>=60)
  {
    M-=60;
    H+=1;
  }

  while(H>=24)
  {
    H-=24;
  }


  cout<<H<<' '<<M<<' '<<S<<'\n';

  return 0;
}
