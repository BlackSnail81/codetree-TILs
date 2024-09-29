#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    int m1 = 0;
    int m2 = 0;

    cin >> a >> b >> c;

    if(a >= b){
        m1 = a;
    }else
        m1 = b;

    if(m1 >= c){
        m2 = b;
    }else  
        m2 = c;

    cout << m2;

    return 0;
}