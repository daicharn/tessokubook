#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    long long k;
    cin >> n >> k;
    long long abcd[4][n];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < n; j++) cin >> abcd[i][j];
    }
 
    long long ab[n * n];
    long long cd[n * n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ab[n * i + j] = abcd[0][i] + abcd[1][j];
            cd[n * i + j] = abcd[2][i] + abcd[3][j];
        }
    }
 
    sort(cd, cd + n * n);
 
    bool flg_found = false;
    for(int i = 0; i < n * n; i++){
        int pos = lower_bound(cd, cd + (n * n), k - ab[i]) - cd;
 
        if((pos < n * n && k - ab[i] == cd[pos])){
            flg_found = true;
            break;
        }
        else continue;
    }
 
    if(flg_found) cout << "Yes" << endl;
    else cout << "No" << endl;
 
    return 0;
}