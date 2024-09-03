#include<iostream>
#include<queue>
#include<functional>
#include<cmath>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;// min heap
	
	int N, SQ;
    cin >> N;

    SQ = sqrt(N);

    for(int i = 1; i <= SQ; i++){
        if(N % i == 0){
            pq.push(i);
            if(N / i != i){
                pq.push(N/i);
            }
        }
    }
        
	while (!pq.empty()) {
		int ret = pq.top();
		pq.pop();
		printf("%d ", ret);
	}
	return 0;
}