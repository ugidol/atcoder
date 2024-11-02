#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	map<int,int> mp;
	for(int i=0;i<N;i++){
		cin >> A[i];
		if ( mp.find( A[i] ) != mp.end() ) {
			B[i] = mp[ A[i] ];
		}
		else {
			B[i] = -1;
		}
		mp[ A[i] ] = i+1;
	}
	for(auto itr:B){
		cout << itr << ' ';
	}
	cout << endl;
	return 0;
}
