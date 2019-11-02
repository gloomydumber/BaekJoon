#include <iostream>

using namespace std;

int main(void)
{
    int A, B;
    while(1)
    {
    cin>>A>>B;

    if(A>=-10000&&A<=10000&&B>=-10000&&B<=10000)
      break;
    }

    if(A>B)
      cout<<'>'<<endl;
      else if(A<B)
        cout<<'<'<<endl;
          else
            cout<<"=="<<endl;
            
    return 0;
}
