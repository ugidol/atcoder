#include <bits/stdc++.h>
using namespace std;

struct _dat {
    int num;
    int a;
    int b;
} ;

int main(void){
    int N,X,Y,Z;
    cin >> N >> X >> Y >> Z ;
    vector<struct _dat> vec(N);
    for(int i=0;i<N;i++){
        int a;
        cin >> a;
        vec[i].num = i;
        vec[i].a = a;
    }
    for(int i=0;i<N;i++){
        int b;
        cin >> b;
        vec[i].b = b;
    }
    vector<struct _dat> ans;
    // 数学の高い順でソート
    sort(vec.begin(),vec.end(),[](struct _dat &a1, struct _dat &a2){  
        if ( a1.a == a2.a ) {
            return a1.num < a2.num ;
        }
        else {
            return a1.a > a2.a ;
        }
        } );
    // X人
    for(int i=0;i<X;i++){
        auto it = vec.begin();
        ans.push_back(*it);
        vec.erase(it);
    }
    // 英語の高い順でソート
    sort(vec.begin(),vec.end(),[](struct _dat &a1, struct _dat &a2){  
        if ( a1.b == a2.b ) {
            return a1.num < a2.num ;
        }
        else {
            return a1.b > a2.b ;
        }
        } );
    // Y人
    for(int i=0;i<Y;i++){
        auto it = vec.begin();
        ans.push_back(*it);
        vec.erase(it);
    }
    // 合計の高い順でソート
    sort(vec.begin(),vec.end(),[](struct _dat &a1, struct _dat &a2){  
        if ( (a1.a + a1.b) == (a2.a + a2.b) ) {
            return a1.num < a2.num ;
        }
        else {
            return (a1.a + a1.b) > (a2.a + a2.b) ;
        }
        } );
    // Y人
    for(int i=0;i<Z;i++){
        auto it = vec.begin();
        ans.push_back(*it);
        vec.erase(it);
    }
    sort(ans.begin(), ans.end(),[](struct _dat &a1, struct _dat &a2){
        return a1.num < a2.num;
    });
    //
    for(auto it : ans ) {
        cout << it.num + 1 << endl;
    }


    return 0;
}