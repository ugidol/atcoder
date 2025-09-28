#include <bits/stdc++.h>
using namespace std;
long f(long a,long b){
	for(long i=0;i<b;i++){
		a *= 10;
	}
	return a;
}
int main(void){
	long N;
	cin >> N;
	int n = 0;
	int nn = 0;
	map<int,int> mp;
	for(int len=1;len<=5;len++){
		function<void(string& str,int depth)> f = [&](string& str, int depth){
			if ( depth >= ( len+1 ) / 2 ) {
				//
				n += 1;
				//
				for(int i=0;i<(len+1)/2;i++){
					str[len-1-i] = str[i];
				}
				long v = (long)std::pow(10,nn) + (n-1) ;
				cout << nn << ':' << n << ':' << '(' << v << ')' << ':' << str << endl;
				mp[ str.size() ] += 1;
				return;
			}
			int i = 0;
			if ( depth == 0 ) {
				i += 1;
			}
			for(;i<10;i++){
				char c = '0' + i;
				str[depth] = c;
				f(str,depth+1);
				str[depth] = ' ';
			}
		};
		string s(len,' ');
		f(s,0);
		n = 0;
		nn += 1;
	}
//	for(auto itr:mp){
//		cout << itr.first << '=' << itr.second << endl;
//	}
	/*
	string ans = "0";
	if ( N == 1 ) {
		return 0;
	}
	N -= 1;
	for(long i=0;;++i){
		function<long(long)> f = [&](long b){
			long a = 1;
			a *= 9;
			for(int i=0;i<b;i++){
				a *= 10;
			}
			return a;
		};
		if ( N < f(i/2) ) {
			cout << N << endl;
			break;
		}
		N -= f(i/2);
	}
	*/
	return 0;
}
