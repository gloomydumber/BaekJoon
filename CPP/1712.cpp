// https://www.acmicpc.net/problem/1712
// 입력 받는 값이 21억 이하의 자연수이기 때문에 단순 반복문으로 푸시면 시간초과가 뜰 수 있습니다.

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  /*
  int A=0, B=0, C=0;
  int n=1;
  int TC;
  int TR;

  scanf("%d %d %d",&A,&B,&C);

  if(C-B<=0)
  {
    n=-1;
  }
  else
  {
    while(1)
    {
      TC=A+B*n;
      TR=C*n;

      if(TR-TC>0)
        break;

      n++;
      }
  }
  printf("%d\n",n);
  return 0;
  */

    int A, B, C;
    cin >> A >> B >> C;
    if (C - B <= 0) cout << -1 << endl;
    else cout << A / (C - B) + 1 << endl;

    return 0;

}
