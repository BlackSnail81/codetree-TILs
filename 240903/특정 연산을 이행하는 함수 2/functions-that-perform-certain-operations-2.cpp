#include <iostream>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

struct Node {
	double n;
	int level;
};

int main() {
    // 여기에 코드를 작성해주세요.
    double a[3];    
    int s[3];
    
    for(int i = 0; i < 3; i++){
        cin >> a[i];
        s[i] = 0;           
    }

    if(a[0] > a[1]){
        if(a[0] > a[2]){
            s[0] = 1;
            if(a[1] > a[2]){
                s[1] = 2;
                s[2] = 3;
            }else s[1] = 3;
            s[2] = 2;
        }else 
            s[0] = 2;
            s[1] = 3;
            s[2] = 1;
        }
    else if(a[0] < a[1]){
        if(a[2] < a[1]){
            s[1] = 1;
            if(a[0] > a[2]){
                s[0] = 2;
                s[2] = 3;
            }else
                s[0] = 3;
                s[2] = 2;
        }else
                s[2] = 1;
                s[1] = 2;
                s[0] = 3;            
        }


    queue<Node> qu;
	qu.push({ a[0],s[0] }); // 노드 번호, 레벨
    qu.push({ a[1],s[1] });
    qu.push({ a[2],s[2] });

    while (!qu.empty()) {
		Node now = qu.front();
        int res = 0;

        if(now.level == 1){
            res = ceil(now.n);
        }else if (now.level == 2){
            res = round(now.n);
        }else res = floor(now.n);

        cout << res << " ";

		qu.pop();		
	}

    return 0;
}