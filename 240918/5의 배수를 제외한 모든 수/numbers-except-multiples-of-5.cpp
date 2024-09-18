#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    float sum = 0;
    float avg = 0;
    int cnt = 0;
    int big;
    int small;

    cin >> x >> y;

    if (x >= y) {
        big = x;
        small = y;
    }else {
        big = y;
        small = x;
    }
        


    for(int i = small; i <= big; i++){
        
        if(i%5!=0){            
            sum += i;
            cnt++;
        }        
    }

    avg = sum/cnt;

    cout << sum << " ";

    cout << fixed;
    cout.precision(1);

    cout << avg;      
    


    return 0;
}