#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[11];

    int n;

    for(int i = 0; i < 10; i++){
        cin >> n;
        a[i] = n;
    }


    cout << a[2]+a[4]+a[9];

    return 0;
}