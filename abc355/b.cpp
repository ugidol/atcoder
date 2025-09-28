#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	map<int,char> mp;
	vector<int> A(N);
	vector<int> B(M);
	vector<int> C;
	for(int i=0;i<N;i++){
		cin >> A[i];
		mp[ A[i] ] = 'A' ;
		C.push_back(A[i]);
	}
	for(int i=0;i<M;i++){
		cin >> B[i];
		mp[ B[i] ] = 'B' ;
		C.push_back(B[i]);
	}
	sort(C.begin(), C.end());
	string ans = "No";
	for(int i=1;i<(int)C.size();i++){
		char prev = mp[ C[i-1] ];
		char curr = mp[ C[i]   ];
		if ( prev == curr && curr == 'A' ) {
			ans = "Yes";
			break;
		}
	}
	cout << ans << endl;
  return 0;
}
