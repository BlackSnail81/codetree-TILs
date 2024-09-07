#include <iostream>
using namespace std;

int cnt = 0;

int codetree(int n){    
    cnt++;
    if (n < 2){        
        return cnt;        
    } else {
        //cnt += 2;
        codetree(n-1) + codetree(n-2);
        return cnt;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int res, n;
    cin >> n;

    res = codetree(n);

    //if(n < 2) res = 1;
    cout << res;


    return 0;
}