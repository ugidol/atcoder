#include <bits/stdc++.h>
using namespace std;
int main(void){
	long X,C;
	cin >> X >> C ;
	long ans = ( X / ( 1000 + C ) ) * 1000 ;
	cout << ans << endl;
	return 0;
}
