// https://www.acmicpc.net/problem/11720
// https://twpower.github.io/74-get-one-interger-in-cpp-and-c-by-using-scanf
// 숫자 하나 씩 끊어 입력받기 : scanf("%1d",&arr[i]);
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  cin>>n;
  int *arr = new int[n];
  int sum=0;

  for(int i=0; i<n; i++)
    scanf("%1d",&arr[i]);

  for(int i=0; i<n; i++)
    sum+=arr[i];

  cout<<sum<<'\n';

  delete []arr;
  return 0;
}
