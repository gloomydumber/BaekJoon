// https://www.acmicpc.net/problem/10872

#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
  if(n>1)
  {
    n=n*factorial(n-1);
    return n;
  }
  else
  {
    return 1; // *** 0! = 1임 ***
  }
}

int main(void)
{
  int n;
  cin>>n;
  cout<<factorial(n);

  return 0;
}
