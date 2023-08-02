#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    int x[q];
    for(int i = 0; i < q; i++) cin >> x[i];
 
    sort(a, a + n);
 
    for(int i = 0; i < q; i++){
        int pos = lower_bound(a, a + n, x[i]) - a;
        if(pos > n && a[0] > x[i]) cout << 0 << endl;
        else cout << pos << endl;  
    }
 
    return 0;
}