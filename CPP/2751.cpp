// https://www.acmicpc.net/problem/2751
// https://www.acmicpc.net/board/view/31887

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

  sort(arr,arr+N);

  for(int i=0; i<N; i++)
    printf("%d\n",arr[i]);


  delete []arr;

  return 0;
}
