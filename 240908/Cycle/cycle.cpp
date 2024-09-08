#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, p;
    cin >> n >> p;

    int res;
    int nres = 0;
    int cycle = 1;
    res = n * n % p;
    nres = res * n % p;

    while(res!=nres){
        nres = nres * n % p;        
        //nres:1,5,25
        cycle++;
        //cycle:1,2,3
    }

    cout << cycle;


    return 0;
}