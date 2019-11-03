// https://www.acmicpc.net/problem/10950

#include <iostream>

using namespace std;

int main(void)
{
  int T;
  int A, B;

  cin>>T;
  int *arr = new int[T];
  int i = 0;

  while(i<T)
  {
    cin>>A>>B;
    if(A>0&&A<10&&B>0&&B<10)
    {
      arr[i]=A+B;
      i++;
    }
  }

  for(int i=0;i<T;i++)
    cout<<arr[i]<<endl;

  delete []arr;

  return 0;
}
