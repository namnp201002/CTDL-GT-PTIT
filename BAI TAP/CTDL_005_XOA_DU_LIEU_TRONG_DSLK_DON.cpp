#include<iostream>

using namespace std;

int main(){
    int N; cin >> N ;
    int arr[N+5];
    for(int i = 0; i < N; i++) cin >> arr[i];
    int k; cin >> k;
    for(int i = 0; i < N; i++){
        if(arr[i] != k) cout << arr[i] << " ";
    }
    return 0;
}