// https://www.acmicpc.net/problem/2869
// scanf 사용법
//달팽이가 목표 지점에 도달한 날에는 미끄러지는 것을
//감안하면 안 되니 총 v-b 미터를 올라가게 되는 것과 같기 때문
// (v-b)/(a-b)로 식을 세울 수 있다는 것
// 문제 정리-->하루에 a-b씩 총 v미터를 올라가면 된다.
// 그런데 (v-b)/(a-b)시 소수점 발생시 하루 더 걸리는 것임
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int A,B,V;
  int day=1;

  scanf("%d %d %d",&A,&B,&V); // scanf 사용법

  /* // 시간 초과 나는 알고리즘 A,B 2,1 V가 1억이면 1억번 돔
  while(height<V)
  {
    height+=A;
    if(height>=V)
    {
      break;
    }
    height-=B;
    day++;
  }
  */

  day=(V-B)/(A-B);
  if((V-B)%(A-B)!=0)
    day++;
  printf("%d",day);

  return 0;
}
