#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a[3];
    int r1, r2, r3;

    for (int i = 0; i < 3; i++){
        cin >> a[i];
    }

    sort(a, a+3);

    /*for (int i = 0; i < 3; i++){
        cout << a[i] << " ";
    }*/

    r1 = ceil(a[2]);
    r2 = floor(a[0]);
    r3 = round(a[1]);

    cout << r1 << " " << r2 << " " << r3;

    return 0;
}