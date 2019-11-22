// https://www.acmicpc.net/problem/5585
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

  cout<<gohakyu<<'\n';
  motte=1000-motte-(500*gohakyu);
  cout<<motte<<'\n';

  hakyu=motte/100;
  motte=motte-(100*hakyu);
  cout<<hakyu<<endl;
  cout<<motte<<'\n';

  gojyu=motte/50;
  motte=motte-(50*gojyu);
  cout<<gojyu<<endl;
  cout<<motte<<endl;

  jyu=motte/10;
  motte=motte-(10*jyu);
  cout<<jyu<<endl;
  cout<<motte<<endl;

  go=motte/5;
  motte=motte-(5*go);
  cout<<go<<endl;
  cout<<motte<<endl;

  ichi=motte/1;
  motte=motte-(1*ichi);
  cout<<ichi<<endl;
  cout<<motte<<endl;

  cnt=gohakyu+hakyu+gojyu+jyu+go+ichi;
  cout<<cnt<<endl;

}
