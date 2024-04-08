#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i=0;i<N;i++){
        string s;
        cin >> s;
        S[i] = s;
    }
    //
    map<char,map<int,int>> mp;
    vector<int> vec(10);
    for(int i=0;i<N;i++){
        string &s = S[i];
        for(int num=0;num<=9;num++){
            char c = '0' + num;
            int pos = (int)s.find(c);
            mp[c][pos] += 1;
        }
    }
    for(int num=0;num<=9;num++){
        map<int,int> &v = mp['0'+num];
        for(auto it : v ){
            vec[num] = max(vec[num], it.first + (it.second-1)*10);
        }
    }
    //
    cout << *min_element(vec.begin(), vec.end()) << endl;
    return 0;
}