/*
 * 等差数列の和を求める関数
 * (AP : Arithmetic Progression )
 * (AS : Arithmetic Sequences)
 * a : 初項 ( first term )
 * d : 公差 ( common difference )
 * n : 項数 ( num of terms ) 
 * an = a + (n-1)d;
 * Sn = n / 2 [ a + an ];
 *    = n / 2 [ a + a + (n-1)d ];
 *    = n / 2 [ 2a + (n-1)d ];
 */
long sum_of_ap(long a, long d, long n){
	return ( ( n * ( ( 2 * a ) + ( n - 1 ) * d ) ) / 2 ) ;
}

