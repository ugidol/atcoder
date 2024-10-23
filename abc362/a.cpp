#include <bits/stdc++.h>
using namespace std;
int main(void){
	int R,G,B;
	cin >> R >> G >> B ;
	string C;
	cin >> C;
	map<string,int> mp;
	mp["Red"] = R;
	mp["Green"] = G;
	mp["Blue"] = B;
	mp[C] = INT_MAX;
	long ans = std::min({mp["Red"], mp["Green"], mp["Blue"]});
	cout << ans << endl;
	return 0;
}
