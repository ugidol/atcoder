#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	string s = "";
	for(int i=0;i<N;i++){
		char c;
		long l;
		cin >> c >> l ;
		if ( s.size() + l  > 100 ) {
			s = "Too Long";
			break;
		}
		for(long j=0;j<l;j++){
			s.push_back(c);
		}
	}
	cout << s << endl;
	return 0;
}
