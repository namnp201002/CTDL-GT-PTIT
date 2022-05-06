#include<iostream>

using namespace std;

void sinhToHop(int N, int K, int arr[]){
    int count = 1;

    int s[N+5];
    for(int i = 1; i <= K; i++) s[i] = i;

    while(1){
        bool check = true;
        for(int i = 1; i <= K; i++){
            if(arr[i] != s[i]) check = false;
        }

        if(check){
            cout << count << endl;
            break;
        }

        int j = K;
        while(j > 0 && s[j] >= N - K + j){
            j--;
        }
        if(j == 0) return;
        s[j] += 1;
        for(int i = j+1; i <= K; i++){
            s[i] = s[j] + i - j;
        }

        count++;
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
    }
    return 0;
}