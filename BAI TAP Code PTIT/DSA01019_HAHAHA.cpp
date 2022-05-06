#include<iostream>
using namespace std;
int check[2] = {0, 1};
int arr[100000];

bool kiemTraKeNhau(int arr[], int N){
    if(arr[0] == 1) return false;
    for(int i = 0; i < N-1; i++){
        if(arr[i] == arr[i+1] && arr[i] == 1) return false;
    }
    return true;
}

void lietKeXauHAHA(int N){
    if(kiemTraKeNhau(arr, N)){
        cout << "H";
        for(int i = 0; i < N; i++){
            if(arr[i] == 0) cout << "A";
            else cout << "H";
        }
        cout << "A\n";
    }
}


void xauNhiPhan(int index, int N){
    if(N == 0) return;
    for(int i = 0; i < 2; i++){
        arr[index] = check[i];
        if(index == N-1){
            lietKeXauHAHA(N);
        }else xauNhiPhan(index+1, N);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N; cin >> N;
        if(N == 2){ 
            cout << "HA\n";
            continue;
        }
        xauNhiPhan(0, N-2);
    }
}