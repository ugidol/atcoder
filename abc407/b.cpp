#include <bits/stdc++.h>
using namespace std;
int main(void){
	int X,Y;
	cin >> X >> Y;
	int c = 0;
	for(int i=1;i<=6;i++){
		for(int j=1;j<=6;j++){
			bool b = false;
			if ( ( i + j ) >= X ) {
				b = true;
			}
			if ( std::abs(i-j) >= Y ) {
				b = true;
			}
			if ( b ) {
				c += 1;
			}
		}
	}
	double ans = (double)c / (double)( 6 * 6 ) ;
	cout << fixed <<  setprecision(10) << ans << endl;
	return 0;
}
