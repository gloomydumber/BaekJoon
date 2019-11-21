// https://www.acmicpc.net/problem/2751
// https://www.acmicpc.net/board/view/31887
// sort의 종류에 관해 정리 및 공부 할 것
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
  int N;
  scanf("%d",&N);
  int *arr = new int[N];

  for(int i=0; i<N; i++)
    scanf("%d",&arr[i]);

  sort(arr,arr+N); // STL의 sort사용..

  for(int i=0; i<N; i++)
    printf("%d\n",arr[i]);

  delete []arr;

  return 0;
}
