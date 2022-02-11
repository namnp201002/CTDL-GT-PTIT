#include<bits/stdc++.h>

using namespace std;

struct number{
    int a, b, c;
};
bool compare(number &x, number &y){
    if(x.b < y.b) return true;
    if(x.b == y.b && x.c < y.c) return true;
    return false; 
}
int main(){
    int t; cin >> t;
    while(t--){
        int N, X;
        cin >> N >> X;
        vector<number> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i].a;
            arr[i].b = abs(arr[i].a - X);
            arr[i].c = i;
        }
        sort(arr.begin(), arr.end(), compare);
        for(int i = 0; i < N; i++) cout << arr[i].a << " ";
        cout << endl;
    }
    return 0;
}