#include<iostream>

using namespace std;
int check[2] = {0,1};
int s[10000];
int N, K;
void xauNhiPhanCoKBit1(int K, int N, int arr[]){
    int count = 0;
    for(int i = 0; i < N; i++){
        if(arr[i] == 1) count ++;
    }
    if(count == K){
        for(int i = 0; i < N; i++){
            cout << arr[i];
        }
        cout << endl;
    }
}

void lietKe(int N, int index){
    for(int i = 0; i <= 1; i++){
        s[index] = check[i];
        if(index == N-1){
            xauNhiPhanCoKBit1(K, N, s);
        }else lietKe(N, index+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> N >> K;
        lietKe(N, 0);
    }
    return 0;
}