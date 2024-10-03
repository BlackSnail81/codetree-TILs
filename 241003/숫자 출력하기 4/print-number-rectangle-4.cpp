#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;

    cin >> n >> k;

    if(k == 1){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << i+1 << " ";
        }        
        cout << endl;
    }}
    else if(k == 2){
        for (int i = 0; i < n; i++){
            if(i % 2 == 0){
            for (int j = 0; j < n; j++){
                cout << j+1 << " ";
            }        
            cout << endl;}
            if(i % 2 == 1){
               for (int j = n; j > 0; j--){
                cout << j << " ";
            }        
            cout << endl; 
            }
    }
    }
    else if(k == 3){
        for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << (j+1)*(i+1) << " ";
        }        
        cout << endl;
    }
    }


    return 0;
}