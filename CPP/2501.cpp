// https://www.acmicpc.net/problem/2501
// 백준에서, 배열 참조를 [-1], 혹은 [overflow]로 하면, runtime error발생
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int input;
  int cnt=0;
  int j=1;
  int idx;
  cin>>input;
  cin>>idx;

  for(int i=1; i<input+1; i++)
  {
    if(input%i==0)
    {
      cnt++;
    }
  }

  //int *arr = new int[cnt];
  //fill_n(arr, cnt, INT_MAX);

  for(int i=1; i<input+1; i++)
  {
    if(input%i==0)
    {
      //arr[j]=i;
      if(j==idx)
        cout<<i<<'\n';
      j++;
    }
  }

  if(cnt<idx)
    cout<<'0'<<'\n';
  /*
  cout<<"notsortfromhere"<<endl;
  for(int i=0; i<cnt+1; i++)
    cout<<arr[i]<<endl;

  sort(arr,arr+cnt);
  cout<<"sortfromhere"<<endl;
  for(int i=0; i<cnt+1; i++)
    cout<<arr[i]<<endl;
  */
  //cout<<arr[idx]<<'\n';


  //delete []arr;
  return 0;
}
