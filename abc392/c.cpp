#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> P(N+1);
	vector<int> Q(N+1);
	vector<int> QQ(N+1);
	for(int i=0;i<N;i++){
		cin >> P[i+1];
	}
	for(int i=0;i<N;i++){
		cin >> Q[i+1];
		QQ[ Q[i+1] ] = (i+1);
	}
	for(int i=1;i<=N;i++){
		cout << Q[ P[ QQ[i] ] ] << ' ';
	}
	cout << endl;
	return 0;
}
