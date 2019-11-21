// https://www.acmicpc.net/problem/1546

#include <iostream>

using namespace std;

int main(void)
{
  int N;
  int M;
  double favg;

  cin>>N;

  double *arr = new double[N];

  for(int i=0; i<N; i++)
    cin>>arr[i];

  M=arr[0];

  for(int i=0; i<N; i++)
  {
    if(arr[i]>M)
      M=arr[i];
  }

  for(int i=0; i<N; i++)
    arr[i]=(arr[i]/M)*100;

  for(int i=0; i<N; i++)
    favg+=arr[i];

  favg=favg/N;
  cout<<fixed;
  cout.precision(2);
  cout<<favg<<'\n';
  delete []arr;

  return 0;
}
