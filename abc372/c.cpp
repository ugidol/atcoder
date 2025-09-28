#include <bits/stdc++.h>
using namespace std;
int count(string &s){
	int num = 0;
	for(int i=0;i<(int)s.size()-2;i++){
		string ss = s.substr(i,3);
		if ( ss == "ABC" ) {
			num += 1;
		}
	}
	return num;
}
int main(void){
	int N,Q;
	cin >> N >> Q;
	string S;
	cin >> S;
	int num = count(S);
	S.insert(S.begin(),' ');
	S.insert(S.begin(),' ');
	S.push_back(' ');
	S.push_back(' ');
	for(int i=0;i<Q;i++){
		int X;
		cin >> X;
		X--;
		X+=2;
		char C;
		cin >> C;

		{
			if ( S[X-2]=='A' && S[X-1]=='B' && S[X]=='C' && C!='C' ) {
				num -= 1;
			}
			else if ( S[X-1]=='A' && S[X]=='B' && C!='B' && S[X+1]=='C' ) {
				num -= 1;
			}
			else if ( S[X]=='A' && C!='A' && S[X+1]=='B' && S[X+2]=='C' ) {
				num -= 1;
			}
		}
		{
			if ( S[X-2]=='A' && S[X-1]=='B' && S[X]!='C' && C=='C' ) {
				num += 1;
			}
			else if ( S[X-1]=='A' && S[X]!='B' && C=='B' && S[X+1]=='C' ) {
				num += 1;
			}
			else if ( S[X]!='A' && C=='A' && S[X+1]=='B' && S[X+2]=='C' ) {
				num += 1;
			}
		}

		S[X] = C;

		cout << num << endl;
	}
	return 0;
}
