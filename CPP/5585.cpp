// https://www.acmicpc.net/problem/5585
// 지저분한데..
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int gohakyu=0;
  int hakyu=0;
  int gojyu=0;
  int jyu=0;
  int go=0;
  int ichi=0;
  int motte=0;
  int cnt=0;

  cin>>motte;

  gohakyu = (1000-motte)/500;
  motte=1000-motte-(500*gohakyu);

  hakyu=motte/100;
  motte=motte-(100*hakyu);


  gojyu=motte/50;
  motte=motte-(50*gojyu);

  jyu=motte/10;
  motte=motte-(10*jyu);

  go=motte/5;
  motte=motte-(5*go);

  ichi=motte/1;
  motte=motte-(1*ichi);

  cnt=gohakyu+hakyu+gojyu+jyu+go+ichi;
  cout<<cnt<<endl;

  return 0;
}
