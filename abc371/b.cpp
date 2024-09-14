#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	vector<map<int,char>> vec(N,map<int,char>());
	for(int i=0;i<M;i++){
		int A;
		cin >> A;
		A -= 1;
		vec[i];
		char B;
		cin >> B;
		vec[A][B] += 1;
		string ans = "No";
		if ( B == 'M' && vec[A][B] == 1 ) {
			ans = "Yes";
		}
		cout << ans << endl;
	}
	return 0;
}
