#include <bits/stdc++.h>
using namespace std;
int main(void){
	string D;
	vector<string> vec0 = {"N","E","W","S","NE","NW","SE","SW"};
	vector<string> vec1 = {"S","W","E","N","SW","SE","NW","NE"};
	cin >> D;
	string ans = "";
	for(int i=0;i<vec0.size();i++){
		if ( vec0[i] == D ) {
			ans = vec1[i];
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
