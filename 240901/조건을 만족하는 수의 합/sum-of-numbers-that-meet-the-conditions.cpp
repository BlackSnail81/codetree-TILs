#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, sum;
    sum = 0;
    cin >> n;

    for(int i = n; i <= 500; i++){
        //짝수판별
        if(i%2==0){
            sum += i;
        }

    }

    cout << sum;

    return 0;
}