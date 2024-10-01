#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int input;
    double sum = 0;
    double avg = 0.0;

    for(int i = 0; i < n; i++){
        cin >> input;
        sum += input;
    }

    avg = sum / n;

    cout << fixed;
    cout.precision(1);

    if(avg >= 70){
    cout << avg;
    }else{
    cout << avg << endl;
    cout << "fail";
    }

    return 0;
}