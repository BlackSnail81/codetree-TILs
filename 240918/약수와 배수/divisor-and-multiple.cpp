#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    int input;
    int a[100+1];

    int yak = 0;
    int bae = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> input;
        a[i] = input;
    }

    cin >> k;

    for(int i = 0; i < n; i++){
        if(k>a[i]){
            if(k%a[i]==0){
                yak+=a[i];
            }
        }else if(k<a[i]){
            if(a[i]%k==0){
                bae+=a[i];
            }                
        }else{
            yak+=a[i];
            bae+=a[i];
        }
    }


    cout << yak << endl;
    cout << bae;


    return 0;
}