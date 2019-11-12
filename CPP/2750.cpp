// https://www.acmicpc.net/problem/2750

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  cin>>N;
  int temp;
  int *arr = new int[N];

  for(int i=0; i<N; i++)
    cin>>arr[i];

  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
      {
        if(arr[i]<arr[j])
        {
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;
        }
      }
  }

  for(int i=0; i<N; i++)
    cout<<arr[i]<<'\n';


  delete []arr;
}
