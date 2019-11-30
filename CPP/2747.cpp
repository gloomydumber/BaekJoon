// https://www.acmicpc.net/problem/2747
// 피보나치의 첫 번째 는 1? 0 1 1 2 3 5 ...
// 0 이 아니라 1 부터 시작, 0은 0번째로 취급
// 재귀쓰면 시간초과
// https://dpdpwl.tistory.com/57
#include <bits/stdc++.h>
using namespace std;

int fibo(int n);
static int arr[46];

int main(void)
{
  int n;
  cin>>n;

  arr[0]=0; arr[1]=1;

  for(int i=2; i>=2&&i<46; i++)
  {
    arr[i]=arr[i-2]+arr[i-1];
  }

  cout<<fibo(n)<<'\n';

  return 0;
}

/*
int fibo(int n)
{
  if(n>=2)
    return fibo(n-2)+fibo(n-1);
    else if(n==1||n==2)
      return 1;
        else
          return 0;
}
*/
int fibo(int n)
{
  return arr[n];
}
