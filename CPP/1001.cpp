#include <iostream>

using namespace std;

int main(void)
{
    int A, B;
    int result;
    while(1)
    {
    cin>>A>>B;
        if(A>0&&B<10)
            break;
        else
            cout<<"type A>0 and B<10"<<endl;
    }
    result = A-B;
    cout<<result<<endl;

    return 0;
}
