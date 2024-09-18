#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int jak = 0;
    int hol = 0;

    int n, input;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;
        if (input == 0)
            break;
        if (input % 2 == 0){
            jak++;
        }else
            hol++;          
    }


    cout << jak << endl;
    cout << hol;

    return 0;
}