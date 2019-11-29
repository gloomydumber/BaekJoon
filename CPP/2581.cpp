// https://www.acmicpc.net/problem/2581
// 1 처리 주의 -> 1은 소수가 아니다.
// 1과 2 대입 시, 2만 소수 처리 되도록 처리
#include <bits/stdc++.h>

using namespace std;

void primedetector(int N);
static int sum = 0;
static int firstPrimeN = 0;

int main(void)
{
  int M, N;

  cin>>M>>N;

/*
  if(M==1)
  {
    cout<<"-1";
    return 0;
  }
*/
  if(M==1)
    M=M+1;

  for(; M<=N; M++)
  {
    //cout<<M<<' ';
    primedetector(M);
  }

  /* cout<<'\n'; */

  if(sum!=0)
    cout<<sum<<'\n'<<firstPrimeN;
    else
      cout<<"-1";

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
  /*
  if(checker==1)
    cout<<"its not prime number";
  else if(checker==0)
    cout<<"it's prime number";
    else
      cout<<"unknown error";
      */
  if(checker==0)
  {
    //cout<<num<<' ';
    sum+=num;
    if(firstPrimeN==0)
      firstPrimeN=num;
  }
  /*cout<<'\n';*/
}
