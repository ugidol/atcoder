#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K ;
	vector<int> A(N);
	vector<int> B(N);
	vector<int> C(N);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	long current = 0;
	for(int i=0;i<N;i++){
		int a,b,c;
		cin >> a >> b >> c;
		if ( current + c <= K ) {
			current += c;
			pq.push({a+b,i});
		}
	}
	return 0;
}
