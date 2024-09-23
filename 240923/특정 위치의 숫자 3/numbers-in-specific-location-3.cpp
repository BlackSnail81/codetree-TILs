#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int input;
    int a[21];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input;
        a[i] = input;
    }


    cout << a[2]+a[4]+a[7]-a[6];

    return 0;
}