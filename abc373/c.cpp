#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	set<long> A;
	for(int i=0;i<N;i++){
		long a;
		cin >> a;
		A.insert(a);
	}
	set<long> B;
	for(int i=0;i<N;i++){
		long b;
		cin >> b;
		B.insert(b);
	}
	long ans = *A.rbegin() + *B.rbegin();
	cout << ans << endl;
	return 0;
}
