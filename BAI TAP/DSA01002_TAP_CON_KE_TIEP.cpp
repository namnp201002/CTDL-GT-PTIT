#include<iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        int arr[K+5];
        for(int i = 1; i <= K; i++){
            cin >> arr[i];
        }
        int i = K;
        int check = 0;
        // Thuat toan sinh to hop ke tiep
        while(i > 0 && arr[i] >= N-K+i){
            i--;
        }
        if(i == 0) check = 1; // Kiem tra xem co phai cau hinh cuoi chua
        arr[i] += 1;
        for(int j = i+1; j <= K; j++){
            arr[j] = arr[i] + j - i;
        }
        
        if(check == 0){
            for(int i = 1; i <= K; i++) cout << arr[i] << " ";
        }else {
            for(int i = 1; i <= K; i++) cout << i << " ";
        }
        cout << endl;

    }
    return 0;
}