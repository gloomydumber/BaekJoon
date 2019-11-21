// https://www.acmicpc.net/problem/10818

#include <iostream>

using namespace std;

int main(void)
{
  int length;
  int min, max;
  while(1)
  {
    cin>>length;
    if(length>=1&&length<=1000000)
      break;
  }

  int *arr = new int[length];

  for(int i=0; i<length; i++)
    cin>>arr[i];

  min=arr[0];
  max=arr[0];

  for(int i=0; i<length; i++)
  {
    if(min>arr[i])
      min=arr[i];
  }

  for(int i=0; i<length; i++)
  {
    if(max<arr[i])
      max=arr[i];
  }

  cout<<min<<' '<<max<<'\n';

  delete []arr;

  return 0;
}
