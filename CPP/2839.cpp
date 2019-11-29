// https://www.acmicpc.net/problem/2839
// 더 깔끔하게 짤 수 없을까
// https://developerin.tistory.com/28
#include <bits/stdc++.h>

using namespace std;

int sugarcal(int& sugar);

static int n=0;
static int m=0;
int cnt=0;
int chk=0;

int main(void)
{
  int sugar;
  cin>>sugar;
  cnt=sugarcal(sugar);

  cout<<cnt;
  return 0;
}

int sugarcal(int& sugar)
{
  int stemp = sugar;
  if(chk==0)
  {
    for(; n*5<=stemp; n++)
    {
    }
    if(n!=0)
      n--;
    chk=1;
  }
  stemp-=n*5;
  //cout<<"N: "<<n<<endl;
  for(; m*3<=stemp; m++)
  {
  }
  if(m!=0)
    m--;
  stemp-=m*3;
  //cout<<"M: "<<m<<endl;
  //cout<<"stemp: "<<stemp<<endl;

  if(stemp!=0)
  {
    if(n>=1)
    {
      n--;
      sugarcal(sugar);
    }
    else
    {
      n=0;
      m=-1;
    }
  }

    return n+m;
}
