#include <bits/stdc++.h>
using namespace std;
typedef struct _Data {
	int length ;
	char c ;
} Data ;
int f(int n, string s){
	int ret = 0;
	char c = s[0];
	vector<Data> vec;
	vec.push_back({1,c});
	for(int i=1;i<n;i++){
		if ( s[i] == c ) {
			auto itr = vec.end();
			itr -= 1;
			itr->length += 1;
		}
		else {
			c = s[i];
			vec.push_back({1,c});
		}
	}
#ifdef DEBUG
	for(int i=0;i<vec.size();i++){
		fprintf(stderr,"[%d][%c]\n",vec[i].length, vec[i].c);
	}
#endif
	return ret;
}
int main(void){
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int N;
		cin >> N;
		string S;
		cin >> S;
		int ans = f(N,S);
		//cout << ans << endl;
	}
	return 0;
}
