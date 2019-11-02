#include <iostream>

using namespace std;

int main(void)
{
    int year;
    while(1)
    {
    cin>>year;

    if(year>=1&&year<=4000)
      break;
    }

    if(year%4==0&&year%100!=0)
      cout<<'1'<<endl;
      else if(year%400==0)
        cout<<'1'<<endl;
          else
            cout<<"0"<<endl;

    return 0;
}
