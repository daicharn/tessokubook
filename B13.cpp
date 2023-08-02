#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    long long k;
    cin >> n >> k;
    long long a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
 
    long long a_ruiseki[n + 1];
    a_ruiseki[0] = 0;
    for(int i = 0; i <= n; i++) a_ruiseki[i + 1] = a_ruiseki[i] + a[i + 1];
 
    long long cnt = 0;
    int r = 0;
    for(int i = 0; i < n; i++){
        while(a_ruiseki[r + 1] - a_ruiseki[i] <= k && r < n) r++;
        cnt += r - i;
    }
 
    cout << cnt << endl;
 
    return 0;
}