#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
 
    long ans_index = 0;
    long min_index = 0;
    long max_index = 1000000000;
    while(min_index < max_index){
        ans_index = (min_index + max_index) / 2;
        long long paper_num = 0;
        for(int i = 0; i < n; i++) paper_num += ans_index / a[i];
        if(paper_num < k) min_index = ans_index + 1;
        else max_index = ans_index;
    }
 
    cout << min_index << endl;
 
    return 0;
}