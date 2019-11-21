// https://www.acmicpc.net/problem/4344
// http://egloos.zum.com/sukhwalj/v/6038007 // 2차원 배열 동적할당
// https://gshan85.tistory.com/34 //고차원 배열 동적할당
#include <iostream>

using namespace std;

int main(void)
{
  int N;
  int stdN;

  cin>>N;

  /* 메모리 할당 */

  int **arr = new int*[N];
  int *stda = new int[N]; // n번째 줄의 학생수 기억
  double *AVG = new double[N]; // n번째 줄의 평균 기억
  double *ratio = new double[N];
  for(int i=0; i<N; i++)
  {
    cin>>stdN;
    stda[i]=stdN;
    arr[i] = new int[stdN];
    for(int j=0; j<stdN; j++)
      cin>>arr[i][j];
  }

  for(int i=0; i<N; i++)
  {
    int sum=0;
    for(int j=0; j<stda[i]; j++) // n번째 줄의 학생수(stda[i]) 까지 점수를 더함
    {
      sum+=arr[i][j];
    }
    AVG[i]=sum/stda[i];
  }

  for(int i=0; i<N; i++)
  {
    int ratioN=0;
    for(int j=0; j<stda[i]; j++)
    {
      if(arr[i][j]>AVG[i])
        ratioN++;
    }
    ratio[i]=double(ratioN)/double(stda[i])*100;
  }

  for(int i=0; i<N; i++)
  {
    cout<<fixed;
    cout.precision(3);
    cout<<ratio[i]<<'%'<<'\n';
  }

  for(int i = 0; i < N; i++) {
      delete [] arr[i];
  }
  delete [] arr;
  delete [] stda;
  delete [] AVG;
  delete [] ratio; // 동적할당이 너무 많아보임..

  return 0;
}
