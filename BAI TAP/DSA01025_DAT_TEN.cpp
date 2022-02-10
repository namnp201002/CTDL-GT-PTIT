#include<iostream>

using namespace std;

void toHopTiepTheo(int N, int K, int arr[]){
    
    while(1)
    {
        for(int i = 1; i <= K; i++){
            char x = 'A';
            x = x + arr[i] - 1;
            cout << x;
        }
        cout << endl;
        int i = K;
        // Thuat toan sinh to hop ke tiep
        while(i > 0 && arr[i] >= N-K+i){
            i--;
        }
        if(i == 0) return; // Kiem tra xem co phai cau hinh cuoi chua
        arr[i] += 1;
        for(int j = i+1; j <= K; j++){
            arr[j] = arr[i] + j - i;
        }
    }
}
void datTen(int N, int K){
    int arr[K+5];
    for(int i = 1; i <= K; i++) arr[i] = i;
    toHopTiepTheo(N, K, arr);
}

int main(){
    int t; cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        datTen(N, K);
    }
    return 0;
}