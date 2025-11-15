#include <bits/stdc++.h>
using namespace std;
int main(void){
	int A,B,C;
	cin >> A >> B >> C;
	vector<int> vec = { A,B,C};
	std::sort(vec.begin(), vec.end(), greater<int>());
	int ans = 0;
	ans += vec[0] * 100 ;
	ans += vec[1] * 10 ;
	ans += vec[2] * 1 ;
	cout << ans << endl;
	return 0;
}
