#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	string prev="";
	string ans = "Yes";
	for(int i=0;i<N-1;i++){
		string s;
		cin >> s;
		if ( prev=="sweet" && s=="sweet" ) {
			ans = "No";
			break;
		}
		prev = s;
	}
	cout << ans << endl;
	return 0;
}
