#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a = 0;
    int res = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        
        cin >> a;
        
        if (a < 0) res += a - 2 * a;
        else res += a;
    }

    

    cout << res;

    return 0;
}