#include <bits/stdc++.h>
using namespace std;

void func(vector<deque<int>> &vec, deque<int> &deq, int start, int end, int num){
    if ( deq.size() == (unsigned long)num ) {
        vec.push_back(deq);
        return ;
    }
    for(int i = start ; i < end; i++){
        deq.push_back(i);
        func(vec,deq,i+1,end,num);
        deq.pop_back();
    }
}
bool func2(vector<vector<int>> &A, deque<int> H, deque<int> W, vector<vector<int>> &B){
    vector<vector<int>> tmp(H.size(),vector<int>(W.size()));
    int i = 0;
    for(auto h : H ) {
        int j=0;
        for(auto w : W ) {
            tmp[i][j] = A[h][w];
            j += 1;
        }
        i += 1;
    }
    if ( tmp == B ) {
        return true;
    }
    else {
        return false;
    }
}
int main(void){
    //
    int H1,W1;
    cin >> H1 >> W1;
    vector<vector<int>> A(H1,vector<int>(W1));
    for(int i=0;i<H1;i++){
        for(int j=0;j<W1;j++){
            cin >> A[i][j] ;
        }
    }
    //
    int H2,W2;
    cin >> H2 >> W2;
    vector<vector<int>> B(H2,vector<int>(W2));
    for(int i=0;i<H2;i++){
        for(int j=0;j<W2;j++){
            cin >> B[i][j] ;
        }
    }
    //
    vector<deque<int>> hVec;
    deque<int> hDeq ;
    func(hVec, hDeq, 0, H1, H2);
    //
    vector<deque<int>> wVec;
    deque<int> wDeq ;
    func(wVec, wDeq, 0, W1, W2);
    //
    bool b = false;
    for(auto h : hVec ) {
        for(auto w : wVec) {
            b = func2(A,h,w,B);
            if ( b ) {
                goto loop_end;
            }
        }
    }
loop_end:
    string ans = "No";
    if ( b ) {
        ans = "Yes";
    }
    cout << ans << endl;
    //
    return 0;
}