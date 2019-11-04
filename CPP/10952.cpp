// https://www.acmicpc.net/problem/10952
// 백준 : 입력이랑 출력 다르게 해결 (입-출력 동시동작 필요없음)
#include <iostream>
using namespace std;
int main(void){
    int a, b;

    while(1){
        cin>>a>>b;
        if(a!=0 || b!=0)
            cout<<a+b<<endl;
        else
            break;
    }
}
