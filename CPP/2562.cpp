// https://www.acmicpc.net/problem/2562

#include <iostream>

using namespace std;

int main(void)
{
  int arr[9];
  int temp;
  int max, cnt;

  for(int i=0; i<9; i++)
  {
    cin>>temp;
    if(temp>=1)
      arr[i]=temp;
  }

  max=arr[0];

  for(int i=0; i<9; i++)
  {
    if(max<arr[i])
      max=arr[i];
  }

  for(int i=0; i<9; i++)
  {
    if(max==arr[i])
      cnt=i+1;
  }

  cout<<max<<'\n'<<cnt<<'\n';

  return 0;
}
