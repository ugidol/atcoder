#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K,X;
	cin >> N >> K >> X ;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin >> A[i];
	}
	A.insert(A.begin()+K,X);
	for(auto itr:A){
		cout << itr << ' ';
	}
	cout << endl;

  return 0;
}
