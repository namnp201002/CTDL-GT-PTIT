#include<iostream>
#include<map>
using namespace std;

void toHopTiepTheo(int N, int K, int arr[]){
    
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

bool kiemTraToHopCuoiCung(int N, int K, int arr[]){
    if(arr[K] == N) {
        for(int i = K; i >= 2; i--){
            if(arr[i] - arr[i-1] != 1) return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        int arr[K+5], b[K+5];
        for(int i = 1; i <= K; i++){
            cin >> arr[i];
            b[i] = arr[i]; // tao ban sao cua mang arr[]
        }

        if(kiemTraToHopCuoiCung(N, K, arr)) {
            cout << K << endl;
            continue;
        }

        toHopTiepTheo(N, K, arr); 

        // for(int i = 1; i <= K; i++) cout << arr[i];

        int count = K;
        // Kiem tra xem co bao nhieu phan tu moi
        for(int i = 1; i <= K; i++){
            for(int j = 1; j <= K; j++){
                if(arr[i] == b[j]){
                    count--;
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}