// https://www.acmicpc.net/problem/1110

#include <iostream>

using namespace std;

int main(void)
{
    int num, first;
    int cnt=0;

    while(1)
    {
      cin >> num;
      if(num>=0&&num<=99)
        break;
    }
    first=num;

    while(1)
    {
      if(num>=0&&num<=9)
        {
          num=num*10+num;
          cnt++;
        }
        else if(num>=10&&num<=99)
        {
          num=(10*(num%10))+(((num/10)+(num%10))%10);
          cnt++;
        }
      if(num==first)
      {
        cout<<cnt<<'\n';
        break;
      }
    }




    return 0;
}
