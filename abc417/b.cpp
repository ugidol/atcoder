
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<int> A(N);
	vector<bool> AA(N,true);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	vector<int> B(M);
	for(int i=0;i<M;i++){
		cin >> B[i];
	}
	for(int i=0;i<M;i++){
		int b = B[i];
		for(int i=0;i<N;i++){
			if ( A[i] == b && AA[i] == true ) {
				AA[i] = false;
				break;
			}
		}
	}
	vector<int> ans ;
	for(int i=0;i<N;i++){
		if ( AA[i] == true ) {
			ans.push_back(A[i]);
		}
	}
	for(auto a:ans){
		cout << a << ' ' ;
	}
	cout << endl;
	return 0;
}
