#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    long long k;
    cin >> n >> k;
    long long a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
 
    long long cnt = 0;
    int r = 1;
    for(int i = 1; i < n; i++){
        while(a[r + 1] - a[i] <= k && r < n) r++;
        cnt += r - i;
    }
 
    cout << cnt << endl;
 
    return 0;
}