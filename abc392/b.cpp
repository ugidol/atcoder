#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<int> A(M);
	set<int> st;
	for(int i=0;i<M;i++){
		cin >> A[i];
		st.insert(A[i]);
	}
	vector<int> X;
	for(int i=1;i<=N;i++){
		if ( st.count(i) == 0 ) {
			X.push_back(i);
		}
	}
	cout << X.size() << endl;
	for(auto itr:X){
		cout << itr << ' ';
	}
	cout << endl;
	return 0;
}
