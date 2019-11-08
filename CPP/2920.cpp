// https://www.acmicpc.net/problem/2920

#include <iostream>

using namespace std;

int main(void)
{
  int dajangjo[8]={1,2,3,4,5,6,7,8};
  int inserted[8];
  int cnt=0;

  for(int i=0; i<8; i++)
  {
    cin>>inserted[i];
  }

  for(int i=0; i<8; i++)
  {
    if(inserted[i]==dajangjo[i])
      cnt++;
      else if(inserted[i]==dajangjo[7-i])
        cnt--;
  }

  if(cnt==8)
    cout<<"ascending"<<'\n';
    else if(cnt==-8)
      cout<<"descending"<<'\n';
      else
        cout<<"mixed"<<'\n';
        
  return 0;
}
