#include <bits/stdc++.h>
using namespace std;
int main(void){
	long R,X,Y;
	cin >> R >> X >> Y;
	long d = ( X * X ) + ( Y * Y );
	long n = 0;
	while(1){
		if ( ( n * n ) * ( R * R ) >= d ) {
			break;
		}
		n += 1;
	}
	if ( n == 1 ) {
		if ( ( R * R ) != d ) {
			n = 2;
		}
	}
	cout << n << endl;
	return 0;
}
