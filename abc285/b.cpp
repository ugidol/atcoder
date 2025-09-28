#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  /*
   * i=1,2,...,N-1
   */
  for(int i=1;i<=N-1;i++){
    /*
     * l+i<=N
     * = l<=(N-i)
     *
     * k=1,2,...,l
     * = k=1,2,...,N-i
     */
    int l=0;
    for(int k=1;k<=(N-i);k++,l++){
#ifdef DEBUG
        fprintf(stderr,"i=%d,",i);
        fprintf(stderr,"k=%d,",k);
#endif
        char c1 = S[k-1];
        char c2 = S[k+i-1];
#ifdef DEBUG
        fprintf(stderr,"S[%d]=%c,S[%d]=%c\n",k,c1,k+i,c2);
#endif
        if ( c1 == c2 ) {
          break;
        }
    }
    cout << l << endl;
  }
  return 0;
}
