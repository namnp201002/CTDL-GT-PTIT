#include<iostream>

using namespace std;
void sinhToHop(int N, int K, int arr[]){
    while(1){
        for(int i = 1; i <= K; i++) cout << arr[i];
        cout << " ";
        int j = K;
        while(j > 0 && arr[j] >= N - K + j){
            j--;
        }
        if(j == 0) return;
        arr[j] += 1;
        for(int i = j+1; i <= K; i++){
            arr[i] = arr[j] + i - j;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int N, K; cin >> N >> K;
        int arr[K];
        for(int i = 1; i <= K; i++) arr[i] = i;
        sinhToHop(N, K, arr);
        cout << endl;
    }
    return 0;
}