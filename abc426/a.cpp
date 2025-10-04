#include <bits/stdc++.h>
using namespace std;
int main(void){
	string X,Y;
	cin >> X >> Y ;
	map<string,int> mp;
	mp["Ocelot"] = 0;
       	mp["Serval"] = 1;
	mp["Lynx"] = 2;
	string ans = "No";
	if ( mp[X] >= mp[Y] ) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}
