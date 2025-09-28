#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	int ans = 0;
	for(int i=0;i<N;i++){
		string S;
		cin >> S;
		if ( S == "Takahashi" ) {
			ans += 1;
		}
	}
	cout << ans << endl;
  return 0;
}
