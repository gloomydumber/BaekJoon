// https://www.acmicpc.net/problem/3052
// https://jeonggyun.tistory.com/4
#include <iostream>

using namespace std;

int main(void)
{
  int arr[10];
  int temp;
  int cnt=0;
  int dcnt=10;

  while(1)
  {
    cin>>temp;
    if(temp<=1000&&temp>=0)
    {
      arr[cnt]=temp;
      cnt++;
    }
    if(cnt==10)
      break;
  }

  for(int i=0; i<10; i++)
  {
    arr[i]=arr[i]%42;
  }

  for(int i=0; i<10; i++)
  {
    for(int k=i+1; k<10; k++)
      {
        if(arr[i]==arr[k])
        {
          dcnt--;
          break;
        }
      }
  }

  cout<<dcnt<<'\n';


  return 0;
}
