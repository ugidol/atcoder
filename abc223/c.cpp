#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n ;
    vector<double> veca(n);
    vector<double> vecb(n);
    for(int i=0;i<n;i++){
        cin >> veca[i] >> vecb[i] ;
    }
    // 左端～
    vector<double> vecc(n);
    for(int i=0;i<n;i++){
        if ( i > 0 ) {
            vecc[i] = vecc[i-1];
        }
        vecc[i] += veca[i] / vecb[i];
    }
    // 右端～
    vector<double> vecd(n);
    for(int i=n-1;i>=0;i--){
        if ( i < n-1 ) {
            vecd[i] = vecd[i+1];
        }
        vecd[i] += veca[i] / vecb[i];
    }
    // ちょうど半分の時間
    double t = vecd[0] / 2 ;
    // ちょうど半分の時間の時のiを求める
    double x = 0;
    for(int i=0;i<n;i++){
        if ( vecc[i] > t ) {
            if ( i > 0 ) {
                t -= vecc[i-1];
            }
            x += t * vecb[i] ;
            break;
        }
        x += veca[i];
    }

    cout << x << endl; 
    
    return 0;    
}