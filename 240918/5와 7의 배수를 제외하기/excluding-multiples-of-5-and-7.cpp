#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, input;
    float sum = 0;
    float avg = 0;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(input%5==0||input%7==0){            
            cnt--;
        }
        else sum += input;
        cnt++;
    }

    cout << sum << endl;   

    avg = sum/cnt;
    cout << fixed;
    cout.precision(1);

    cout << round(avg); 


    return 0;
}