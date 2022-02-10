#include<iostream>
using namespace std;
bool kiemTraDoiXung(int a[], int n){
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-i-1]) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    int a[n + 5] = {0};
    while(1){
        if(kiemTraDoiXung(a, n)){
            for(int i = 0; i < n; i++){
                cout << a[i];
                // in ra mot so khoang cach
                for(int j = 0; j < n; j++){
                    cout << " ";
                }
            }
            cout << endl;
        }
        int j = n-1; // xet tu cuoi mang
        /* neu gap phan tu dau tien la 0 thi thay 0 bang 1
        */
        while(a[j] == 1){ 
            a[j] = 0;
            j--;
        }
        if(j < 0) break;
        a[j] = 1;
    }
    return 0;
}