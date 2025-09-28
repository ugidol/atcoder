#include <bits/stdc++.h>
using namespace std;

typedef struct _mydata {
    int i;
    int w;
} mydata ;

bool func1(const mydata &left, const mydata &right ) {
    // 勝ち数が同じだったら、番号の昇順
    if ( left.w == right.w ) {
        return left.i < right.i ;
    }
    else {
        // 勝ち数の降順
        return right.w < left.w ;
    }
}

void func2(mydata &left, char c1, mydata &right, char c2) {
    if ( ( c1 == 'G' && c2 == 'C' ) ||
         ( c1 == 'C' && c2 == 'P' ) ||
         ( c1 == 'P' && c2 == 'G' ) ) {
             left.w += 1;
        return ;
    }
    if ( ( c1 == 'C' && c2 == 'G' ) ||
         ( c1 == 'P' && c2 == 'C' ) ||
         ( c1 == 'G' && c2 == 'P' ) ) {
             right.w += 1;
        return ;
    }
    return ;
}

int main(void){
    int n , m ;
    cin >> n >> m ;
    // 出す手のマトリックス
    char mtrx[100][100];
    memset(mtrx,0x00,sizeof(mtrx));
    for(int i=0;i<(2*n);i++){
        for(int j=0;j<m;j++){
            cin >> mtrx[i][j] ;
        }
    }
    // 初期化
    vector<mydata> vec(2*n);
    for(int i=0;i<(2*n);i++){
        vec[i].i = i;
        vec[i].w = 0;
    }
    // 試合
    for(int i=0;i<m;i++){
        for(int j=0;j<(2*n);j+=2){
            mydata &left = vec[j];
            mydata &right = vec[j+1];
            // printf("%d)",i);
            // printf("A%d:%d,",left.i+1,left.w);
            // printf("A%d:%d->",right.i+1,right.w);
            func2(left,mtrx[left.i][i],right,mtrx[right.i][i]);
            // printf("A%d:%d,",left.i+1,left.w);
            // printf("A%d:%d\n",right.i+1,right.w);
        }
        sort(vec.begin(), vec.end(), func1 );
    }
    // 結果
    for(int i=0;i<(2*n);i++){
        // printf("A%d:%d\n",vec[i].i,vec[i].w);
        cout << vec[i].i + 1 << endl ;
    }
    return 0;
}