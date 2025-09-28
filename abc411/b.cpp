#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> D(N+1,0);
	for(int i=1;i<=N-1;i++){
		int d;
		cin >> d;
		D[i] = D[i-1] + d;
	}
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			cout << ( D[j]-D[i] ) << ' ';
		}
		cout << endl;
	}
	return 0;
}
