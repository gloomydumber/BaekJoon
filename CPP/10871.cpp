// https://www.acmicpc.net/problem/10871
#include <iostream>

using namespace std;

int main(void)
{
  int n, x;
  while(1)
  {
    cin>>n>>x;

    if(n>=1&&n<=10000&&x>=1&&x<=10000)
      break;
  }

  int *arr = new int[n];
  int *result = new int[n];
  int k=0;
  int cnt=0;

  for(int i=0;i<n;i++)
    cin>>arr[i];

  for(int i=0;i<n;i++)
  {
    if(arr[i]<x)
    {
      result[k]=arr[i];
      k+=1;
      cnt++;
    }

  }

  for(int i=0;i<cnt;i++)
    cout<<result[i]<<' ';

  delete []arr;
  delete []result;

  return 0;
}
