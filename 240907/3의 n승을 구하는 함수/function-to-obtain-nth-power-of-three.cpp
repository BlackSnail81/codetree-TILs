#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int res = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        res = res * 3;
    }
    
    cout << res;

    return 0;
}