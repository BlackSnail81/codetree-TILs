#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	std::ios::sync_with_stdio(false);
	unordered_map<char, int> um;
	
	/*
	if (um.empty()) {
		cout << "unordered_map은 비어있습니다" << endl;
	}*/

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		char s;
		cin >> s;

		//대문자 판별, 소문자 판별은 islower
		if (isupper(s)) break;

		if (um.find(s) != um.end()) {
			um[s]++;  //해당key값의 value만 1증가
		}
		um.insert(make_pair(s, 1));
	}
	
	//cout << "unordered_map의 크기는 " << um.size() << " 입니다" << endl;

	vector<pair<char, int>> sortingArray(um.begin(), um.end()); //정렬을 위한 벡터
	sort(sortingArray.begin(), sortingArray.end(),
		[](pair<char, int>& a, pair<char, int>& b){
		//key 기준 정렬
		return a.first < b.first;		// key 오름차순 정렬		
	});

	for (auto& elem : sortingArray){
		cout << elem.first << " : " << elem.second << endl;
	}
	
	return 0;
}