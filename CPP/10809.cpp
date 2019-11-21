// https://www.acmicpc.net/problem/10809

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  char *arr = new char[101]{'\0'}; /* 문자열 동적할당 '\0' 주의 */
  int index[26];
  int temp;
  fill_n(index, 26, -1);

  cin>>arr;
  //scanf("%s",arr); // 문제랑 관계없음
  //cin.getline(arr, 101); // 문제랑 관계없음

  for(int i=0; i<101; i++) // indexing range 주의
  {
    temp=arr[i]-'a'; // 소문자 a의 ASCII = 97
    //cout<<arr[i]<<' '<<temp<<' ';
    //cout<<"hi"<<endl;
    if(index[temp]==-1)
      index[temp]=i;
  }

  for(int i=0; i<26; i++)
  {
    cout<<index[i]<<' ';
  }

  delete []arr;

  return 0;
}
