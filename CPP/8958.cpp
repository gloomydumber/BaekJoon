// https://www.acmicpc.net/problem/8958
// http://egloos.zum.com/sukhwalj/v/6038007 // 2차원 배열 동적할당
#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
  int N;
  int add=1;
  cin>>N;

  /* 메모리 할당 */
  char **arr = new char*[N];
  int *score=new int[N];

  for(int i=0; i<N; i++)
  {
    score[i]=0;
  }

  for(int i = 0; i < N; ++i) {
      arr[i] = new char[80];
  }

  for(int i=0; i<N; i++)
  {
    cin>>arr[i];
  }
/*
  for(int i=0; i<N; i++)
  {
    cout<<arr[i];
  }
*/
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<80; j++)
    {
      if(arr[i][j]=='O')
      {
        score[i]+=add;
        add++;
      }
      else if(arr[i][j]=='X')
      {
        add=1;
      }
    }
    add=1;
  }

  for(int i=0;i<N;i++)
    cout<<score[i]<<'\n';

  /* 메모리 해제 */
  for(int i = 0; i < N; ++i) {
      delete [] arr[i];
  }
  delete [] arr;
  delete [] score;
  return 0;
}
