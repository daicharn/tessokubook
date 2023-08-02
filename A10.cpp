#include <iostream>
using namespace std;
 
int n;
int a_n[100000];
int d;
int l_d[100000];
int r_d[100000];
int l_max[100000];
int r_max[100000];
 
int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a_n[i];
    cin >> d;
    for(int i = 0; i < d; i++) cin >> l_d[i] >> r_d[i];
 
    l_max[0] = a_n[0];
    for(int i = 1; i < n; i++) l_max[i] = max(l_max[i - 1], a_n[i]);
 
    r_max[n - 1] = a_n[n - 1];
    for(int i = n - 2; i >= 0; i--) r_max[i] = max(r_max[i + 1], a_n[i]);
 
    for(int i = 0; i < d; i++){
        cout << max(l_max[l_d[i] - 2], r_max[r_d[i]]) << endl;
    }
 
    return 0;
}