#include <bits/stdc++.h>
using namespace std;
const long int N = 1000000;
int a[N+1];
vector<long> nums(0);
void init(void){
    int i;
    int j;
    /* 配列aの初期化 */
    for(a[1]=0,i=2; i<=N; i++){
        a[i] = 1;
    }
    /* 素数の判定 */
    for(i=2;i<=N/2; i++){
        for(j=2; j<= N/i; j++){
        a[i*j] = 0;
        }
    }
    /* 素数の出力 */
    for(i=1;i<=N; i++){
        if ( a[i] == 1 ) {
            nums.push_back(i);
        }
    }
}
int main(void){
    long N;
    cin >> N;
    init();
    //
    long ans = 0;
    for(long i=0;i<(long)nums.size();i++){
        long p = nums[i];
        bool flg = false;
        for(long j=i+1;i<(long)nums.size();j++){
            long q = nums[j];
            if ( p * q * q * q > N ) {
                break;
            }
            ans += 1;
            flg = true;
        }
        if ( flg == false ) {
            goto end_of_loop;
        }
    }
end_of_loop:
    cout << ans << endl;
    return 0;
}