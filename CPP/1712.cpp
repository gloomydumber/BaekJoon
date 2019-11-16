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

    //Pi=TR-TC가 0보다 큰 순간을 찾아야한다.
    // A/(C-B) < n 인 최초의 n을 찾아야 한다.
    // A/(C-B)의 값은 정해져있다. (나누어 떨어지든, 아니든)
    // 나누어 떨어지는 경우는 손해도아니고 이득도 아닌 손익분기점 그 자체.
    // 그 값에 1을 더한게 위 부등식을 만족하는 최초의 생산량 n일 것이다.
    return 0;

}
