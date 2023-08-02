#include <iostream>
using namespace std;

int n, x;
int a[100000];

int main(){
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];

    int center_index = n / 2;
    int min_index = 0;
    int max_index = n;
    while(true){
        center_index = (max_index + center_index) / 2;
        if(x == a[center_index]) break;

        if(x > a[center_index]){
            min_index = center_index + 1;
        }
        else{
            max_index = center_index - 1;
        }
    }

    cout << center_index + 1 << endl;

    return 0;
}