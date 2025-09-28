#include <bits/stdc++.h>
using namespace std;
long factorial(long n){
	long v=1;
	if ( n == 0 ) {
		return v;
	}
	for(long i=1;i<=n;i++){
		v *= i;
	}
	return v;
}
long combination(long n, long r){
	return ( factorial(n) / ( factorial(r) * factorial(n-r) ) );
}
int main(void){
	long num = 0;
	long c = 20;
	for(long r=1;r<=c;r++){
		fprintf(stderr,"%ld C %ld =%ld\n",c,r,combination(c,r));
		num += combination(c,r);
	}
	cout << num << endl;
	return 0;
}
