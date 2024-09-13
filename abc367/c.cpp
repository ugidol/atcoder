#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N,K;
	cin >> N >> K ;
	vector<int> R(N);
	for(int i=0;i<N;i++){
		cin >> R[i];
	}
	function<void(vector<char>&)> f = [&](vector<char> &vec){
		if ( vec.size() == N ) {
			function<bool(void)> g = [&](void){
				int v = 0;
				for(auto c:vec){
					v += (c-'0');
				}
				if ( v % K == 0 ) {
					return true;
				}
				else {
					return false;
				}
			};
			if ( g() ) {
				for(auto c:vec){
					cout << c << ' ';
				}
				cout << endl;
			}
		}
		int n = vec.size();
		for(int i=1;i<=R[n];i++){
			char c = (char)'0'+i;
			vec.push_back(c);
			f(vec);
			vec.pop_back();
		}
	};
	vector<char> vec(0,' ');
	f(vec);
  return 0;
}
