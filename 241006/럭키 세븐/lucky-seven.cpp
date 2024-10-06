#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, input;
    int cnt, sum;
    double avg;

    cnt = 0;
    sum = 0;
    avg = 0.0;

    cin >> n;

    for(int i = 0; i < n; i++){
        
        cin >> input;

        if(input%7==0){
            cnt++;
            sum=sum+input;
        }

    }

    avg = double(sum) / cnt;

    cout << fixed;
    cout.precision(1);

    cout << cnt << " " << sum << " " << avg;



    


    return 0;
}