#include<bits/stdc++.h>

using namespace std;

struct number{
    int a, b, c;
};
bool compare(number &x, number &y){
    if(x.b < y.b) return true; // tra ve true neu gia tri tuyet doi x nho hon y
    if(x.b == y.b && x.c < y.c) return true; // tra ve true neu gia tri tuyet doi cua x = y va x xuat hien truoc y
    return false; 
}
int main(){
    int t; cin >> t;
    while(t--){
        int N, X;
        cin >> N >> X;
        vector<number> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i].a; // nhap gia tri cua mang
            arr[i].b = abs(arr[i].a - X); // lay gia tri tuyet doi 
            arr[i].c = i; // luu vi tri cua phan tu
        }
        sort(arr.begin(), arr.end(), compare); // sap xep theo gia tri tuyet doi

        // result
        for(int i = 0; i < N; i++) cout << arr[i].a << " ";
        cout << endl;
    }
    return 0;
}