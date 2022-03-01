#include<iostream>

using namespace std;

void insertX(int arr[], int X, int &N){

    // kiem tra xem X co phai phan tu nho nhat hoac lon nhat hay khong
    if(arr[0] > X){
        // gan cac phan tu cua mang xuong cuoi
        for(int i = N; i >= 1; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = X;
        N += 1; // Tang them 1 phan tu cua mang
        return;
    }else if(arr[N-1] < X){
        arr[N] = X; // gan phan tu cuoi cung cua mang bang X
        N += 1;
    }
    int vitri;
    for(int i = 0; i < N-1; i++){
        // tim vi tri ma arr[i] < X < arr[i+1]
        if(arr[i] < X && arr[i+1] > X){
            vitri = i+1; // lay vi tri de chen X
        }
    }
    // gan cac phan tu cua mang xuong cuoi
    for(int i = N; i >= vitri+1; i--){
        arr[i] = arr[i-1];
    }
    
    arr[vitri] = X;
    N += 1;
}

int main(){
    int n; cin >> n;
    int k; cin >> k;
    int arr[n+5];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    insertX(arr, k, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}