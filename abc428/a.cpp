#include <bits/stdc++.h>
using namespace std;
int main(void){
	int S,A,B,X;
	cin >> S >> A >> B >> X ;
	int ans = ( X / ( A + B ) ) * A * S ;
	ans += ( std::min( X % ( A + B ), A ) * S );
	cout << ans << endl;
	return 0;
}
