#include <bits/stdc++.h>
using namespace std;
string conv(long v, long n){
	string s;
	while(v>0){
		long d = v % n;
		s.push_back('0'+d);
		v /= n ;
	}
	s = string(s.rbegin(), s.rend());
	return s;
}
bool palindrome(string s){
	for(int i=0;i<(s.size()+1/2);i++){
		if ( s[i] != s[s.size()-1-i] ) {
			return false;
		}
	}
	return true;
}
long ans = 0;
int A;
long N;
void f(string& s,int v, int length){
	if ( v == (length+1)/2 ) {
		long vv = stol(s);
		string ss = conv(vv,A);
		if ( vv <= N && palindrome(ss) ) {
#ifdef DEBUG
			fprintf(stderr,"[%ld][%s][%s]\n",vv,s.c_str(),ss.c_str());
#endif
			ans += vv;
		}
		return;
	}
	int start = 0;
	if ( v == 0 ) {
		start = 1;
	}
	int end = 9;
	for(int i=start;i<=end;i++){
		char c = '0' + i;
		s[v] = c;
		s[length-1-v] = c;
		f(s,v+1,length);
	}
}
int main(void){
	cin >> A;
	cin >> N;
	long length = to_string(N).size();
#ifdef DEBUG
	fprintf(stderr,"length=[%ld]\n",length);
#endif
	for(int i=1;i<=length;i++){
		string s(i,'0');
		f(s,0,i);
	}
	cout << ans << endl;
	return 0;
}
