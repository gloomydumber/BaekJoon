// https://www.acmicpc.net/problem/2577
// https://blockdmask.tistory.com/82
#include <iostream>
// #include <cmath>
using namespace std;

int main(void)
{
  int A, B, C;
  int result;
  int num[10]={0,};
  int resultarr[9];


  while(1)
  {
    cin>>A>>B>>C;
    if(A>=100&&B>=100&&C>=100
    &&A<1000&&B<1000&&C<1000)
      break;
  }
  result=A*B*C;

  if(result>=100000000)
  {
    /*
    for(int i=0; i<9; i++)
    {
      int temp=result/powl(10,(8-i));
      resultarr[i]=temp%10;
    }
    */
    resultarr[0]=(result/100000000)%10;
    resultarr[1]=(result/10000000)%10;
    resultarr[2]=(result/1000000)%10;
    resultarr[3]=(result/100000)%10;
    resultarr[4]=(result/10000)%10;
    resultarr[5]=(result/1000)%10;
    resultarr[6]=(result/100)%10;
    resultarr[7]=(result/10)%10;
    resultarr[8]=(result/1)%10;

    for(int i=0; i<10; i++)
    {
      for(int k=0; k<9; k++)
      {
        if(i==resultarr[k])
          num[i]++;
      }
    }
  }
  else if(result>=10000000&&result<=99999999)
  {
    /*
    for(int i=0; i<8; i++)
    {
      int temp=result/powl(10,(7-i));
      resultarr[i]=temp%10;
    }
    */
    resultarr[0]=(result/10000000)%10;
    resultarr[1]=(result/1000000)%10;
    resultarr[2]=(result/100000)%10;
    resultarr[3]=(result/10000)%10;
    resultarr[4]=(result/1000)%10;
    resultarr[5]=(result/100)%10;
    resultarr[6]=(result/10)%10;
    resultarr[7]=(result/1)%10;

    for(int i=0; i<10; i++)
    {
      for(int k=0; k<8; k++)
      {
        if(i==resultarr[k])
          num[i]++;
      }
    }
  }
  else if(result>=1000000&&result<=9999999)
  {
    /*
    for(int i=0; i<7; i++)
    {
      int temp=result/powl(10,(6-i));
      resultarr[i]=temp%10;
    }
    */
    resultarr[0]=(result/1000000)%10;
    resultarr[1]=(result/100000)%10;
    resultarr[2]=(result/10000)%10;
    resultarr[3]=(result/1000)%10;
    resultarr[4]=(result/100)%10;
    resultarr[5]=(result/10)%10;
    resultarr[6]=(result/1)%10;

    for(int i=0; i<10; i++)
    {
      for(int k=0; k<7; k++)
      {
        if(i==resultarr[k])
          num[i]++;
      }
    }
  }

  for(int i=0; i<10; i++)
  {
    cout<<num[i]<<endl;
  }

  return 0;
}
