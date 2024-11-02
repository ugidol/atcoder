#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int> A(4);
	vector<int> B(4);
	for(int i=0;i<4;i++){
		int a;
		cin >> a;
		a--;
		A[i] = a;
		B[a] += 1;
	}
	sort(B.begin(), B.end());
	int ans = 0;
	//if ( B == {0,0,0,4} ) {
	if ( B[3] == 4 ) {
		ans = 2;
	}
	// {0,0,1,3}
	else if ( B[3] == 3 ) {
		ans = 1;
	}
	// { 0,0,2,2 };
	// { 0,1,1,2 };
	else if ( B[3] == 2 ) {
		if ( B[2] == 2 ) {
			ans = 2;
		}
		else {
			ans = 1;
		}
	}
	// { 1,1,1,1 }
	cout << ans << endl;
	return 0;
}
