#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int>qu;

    int n;
    int p;
    int cyres, ret;
    int cycle = 0;

    cin >> n >> p;

    cyres = n * n % p;
    
    qu.push(cyres);
    cycle++;

    cyres = cyres * n % p;

    //cout << cyres << endl;
    ret = qu.front();
    //cout << ret << endl;

    while(cyres!=qu.front()){
        cyres = cyres * n % p;
        qu.push(cyres);
        cycle++;
    }    
    cout << cycle;
    return 0;
}