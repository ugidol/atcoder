#include <bits/stdc++.h>
using namespace std;
int main(void){
	int X,Y;
	cin >> X >> Y ;
	X -= 1;
	int ans = ( ( X + Y ) % 12 ) + 1;
	cout << ans << endl;
	return 0;
}
