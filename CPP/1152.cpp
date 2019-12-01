// https://www.acmicpc.net/problem/1152
/* null 문자 \0 활용 */
#include <bits/stdc++.h>
using namespace std;

int telephone(char c);

int main(void)
{
  char c;
  char temp='\0';
  int cnt=1;

  while(1)
  {
    scanf("%c",&c);
    if(c==' '&&temp!='\0')
    {
      cnt++;
    }
    else if(c=='\n'&&temp=='\0')
    {
      cnt=0;
      break;
    }
    else if(c=='\n'&&temp==' ')
    {
      cnt--;
      break;
    }
    else if(c=='\n'&&temp!=' ')
    {
      break;
    }
    temp=c;
  }

  cout<<cnt<<'\n';

  return 0;
}
