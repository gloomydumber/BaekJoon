// https://www.acmicpc.net/problem/1978

#include <bits/stdc++.h>

using namespace std;

void primedetector(int N);
static int cnt = 0;

int main(void)
{
  int nofn;

  cin>>nofn;
  int *arr = new int[nofn];

  for(int i=0; i<nofn; i++)
    cin>>arr[i];

  for(int i=0; i<nofn; i++)
    primedetector(arr[i]);

  cout<<cnt;

  delete []arr;

  return 0;
}

void primedetector(int num)
{
  int dvider = num-1;
  int checker = 0;

  for(; dvider>1; dvider--)
  {
    /*cout<<"divider: "<<dvider<<'\n';*/
    if(num%dvider==0)
    {
      /*cout<<"triggered N and Dvider : "<<N<<" "<<dvider<<'\n';*/
      checker=1;
    }
  }

  if(num==1&&checker==1)
  {
    //cout<<"its not prime number";
  }
  else if(num!=1&&checker==0)
  {
    //cout<<num<<" is prime so, plused"<<"\n";
    cnt++;
    //cout<<"it's prime number";
  }
  /*
    else
      cout<<"unknown error";
      */
}
