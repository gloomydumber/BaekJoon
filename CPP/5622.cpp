// https://www.acmicpc.net/problem/5622
// 숫자 하나 씩 끊어 입력받기 : scanf("%1d",&arr[i]);
#include <bits/stdc++.h>
using namespace std;

int telephone(char c);

int main(void)
{
  char c;
  int time=0;

  while(c!='\n')
  {
    scanf("%1c",&c); // scanf("%c,&c"); 해도 돌아감
    time+=telephone(c);
  }

  cout<<time<<'\n';

  return 0;
}

int telephone(char c)
{
  if(c=='A'||c=='B'||c=='C')
    return 3;
    else if(c=='D'||c=='E'||c=='F')
      return 4;
      else if(c=='G'||c=='H'||c=='I')
        return 5;
        else if(c=='J'||c=='K'||c=='L')
          return 6;
          else if(c=='M'||c=='N'||c=='O')
            return 7;
            else if(c=='P'||c=='Q'||c=='R'||c=='S')
              return 8;
              else if(c=='T'||c=='U'||c=='V')
                return 9;
                else if(c=='W'||c=='X'||c=='Y'||c=='Z')
                  return 10;
                  else
                    return 0;
}
