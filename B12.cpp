#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    double ans = 0;
    double ans_min = 0;
    double ans_max = 100;
    for(int i = 0; i < 20; i++){
        ans = (ans_min + ans_max) / 2.0;
        double sum_val = ans * ans * ans + ans;
        if(sum_val < n) ans_min = ans;
        else ans_max = ans;
    }
 
    printf("%.20f\n", ans);
 
    return 0;
}