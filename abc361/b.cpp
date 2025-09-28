#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a,b,c,d,e,f,g,h,i,j,k,l;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
	if ( a > d ) {
		swap(a,d);
	}
	if ( b > e ) {
		swap(b,e);
	}
	if ( c > f ) {
		swap(c,f);
	}
	vector<vector<int>> ary = {
		{g,h,i},{j,h,i},
		{g,k,i},{j,k,i},
		{g,h,l},{j,h,l},
		{g,k,l},{j,k,l},
	};
	string ans = "No";
	for(vector<int> &p:ary){
		if ( a <= p[0] && p[0] <= d ) {
			if ( b <= p[1] && p[1] <= e ) {
				if ( c <= p[2] && p[2] <= f ) {
					ans = "Yes";
				}
			}
		}
	}
	cout << ans << endl;
  return 0;
}
