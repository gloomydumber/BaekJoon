// https://www.acmicpc.net/problem/2530
//http://blog.naver.com/kks227/220246803499
// 배열의 최소, 최대 값 -> <algorithm>에 정의 되어있는
// *min_element, *max_element
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int burger[3];
  int drink[2];

  for(int i=0; i<3; i++)
    cin>>burger[i];
  for(int i=0; i<2; i++)
    cin>>drink[i];

  cout<<*min_element(burger,burger+3)+
  *min_element(drink,drink+2)-50;

  return 0;
}
