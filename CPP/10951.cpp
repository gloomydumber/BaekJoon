// https://www.acmicpc.net/problem/10951
// https://wanna-b.tistory.com/59
// https://gooddaytocode.blogspot.com/search/label/%5B006%5D%20%EC%9E%85%EB%A0%A5%EC%9D%84%20%EC%B2%98%EB%A6%AC%ED%95%98%EB%8A%94%20%EC%97%AC%EB%9F%AC%20%EA%B0%80%EC%A7%80%20%EB%B0%A9%EB%B2%95

#include <iostream>
using namespace std;
int main(void){
    int a, b;

    while(cin>>a>>b){

        if(a>0&&a<10&&b>0&&b<10)
          cout<<a+b<<endl;
    }

    return 0;
}
