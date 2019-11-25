// https://www.acmicpc.net/problem/2908
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int A, B;
  int revA, revB;
  cin>>A>>B;

  revA=(A/100)+(10*((A%100)/10))+(100*((A%100)%10));
  revB=(B/100)+(10*((B%100)/10))+(100*((B%100)%10));

  cout<<max(revA, revB);
  return 0;
}
