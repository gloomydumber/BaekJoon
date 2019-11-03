// https://www.acmicpc.net/problem/15552
// https://starrykss.tistory.com/750
// https://www.acmicpc.net/board/view/22716

#include <iostream>

using namespace std;

int main(void)
{
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int T, A, B;
  cin>> T;

  for(int i=0; i<T; i++){
    cin >> A>> B;
    cout<< A+B << '\n';
  }

  return 0;
}
