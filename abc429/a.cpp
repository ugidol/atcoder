#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,M;
	cin >> N >> M;
	for(int i=1;i<=N;i++){
		string ans = "Too Many Requests";
		if ( i <= M ) {
			ans = "OK";
		}
		cout << ans << endl;
	}
	return 0;
}
