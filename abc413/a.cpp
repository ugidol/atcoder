#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M ;
	vector<int> A;
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		A.push_back(a);
	}
	string ans = "Yes";
	int sum = 0;
	for(auto itr:A){
		sum += itr;
	}
	if ( sum > M ) {
		ans = "No";
	}
	cout << ans << endl;
	return 0;
}
