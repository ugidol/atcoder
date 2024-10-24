#include <bits/stdc++.h>
using namespace std;
int main(void){
	string S,T;
	cin >> S >> T ;
	int len = S.size();
	string ans = "No";
	for(int w=1;w<len;w++){
		for(int c=0;c<w;c++){
			string s ;
			for(int i=0;i<(len+(w-1)/w);i++){
				int idx = i*w+c;
				if ( idx < len ) {
					s.push_back(S[idx]);
				}
			}
#ifdef DEBUG
			cerr << s << endl;
#endif
			if ( s == T ) {
				ans = "Yes";
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
