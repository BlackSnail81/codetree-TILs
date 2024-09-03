#include<iostream>
#include<queue>
#include<functional>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;// min heap
	//priority_queue<int, vector<int>, less<int>> pq2; // max heap ( priority_queue<int> pq2)

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
    
    //int vect[] = { 3,2,1,6,7,9 };
	


	while (!pq.empty()) {
		int ret = pq.top();
		pq.pop();
		printf("%d ", ret);
	}
	return 0;
}