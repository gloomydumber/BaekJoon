// https://www.acmicpc.net/problem/10757

#include <bits/stdc++.h>
using namespace std;

int summation (string A, string B)
{
  int tempA, tempB, temp, result;
  string stemp1, stemp2;

  while(!A.empty()||!B.empty())
  {
    stemp1=A.back();
    tempA=stoi(stemp1);
    stemp2=B.back();
    tempB=stoi(stemp2);
    result=tempA+tempB;
    A.pop_back();
    B.pop_back();
    cout<<result<<'\n';
  }



  return temp;
}

int main(void)
{
  //long long A, B; //__int64 A,B;
  //unsigned __int64 A, B;
  string A;
  string B;
  cin>>A>>B;
  summation(A, B);

  return 0;
}
