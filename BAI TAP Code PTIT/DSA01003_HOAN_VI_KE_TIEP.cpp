#include<iostream>
#include<algorithm>
using namespace std;

void show(int N, int arr[]){
    for(int i = 1; i <=N; i++) cout << arr[i] << " ";
}

bool kiemTraCauHinhCuoi(int N, int arr[]){
    for(int i = 1; i <= N - 1; i++){
        if(arr[i] < arr[i+1]) return false;
    }
    return true;
}

void hoanViKeTiep(int N, int arr[]){
    if(kiemTraCauHinhCuoi(N, arr)){
        for(int i = 1; i <= N; i++) cout << i << " ";
    }else{
        int i = N - 1;
        while(i > 0 && arr[i] > arr[i+1]) i--;
        int k = N;
        while(arr[i] > arr[k]) k--;
        swap(arr[i], arr[k]);
        int left = i+1, right = N;
        while(left < right){
            swap(arr[left], arr[right]);
            left++; right--;
        }
        show(N, arr);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int arr[N+5];
        for(int i = 1; i <= N; i++) cin >> arr[i];
        hoanViKeTiep(N, arr);
        cout << endl;
    }
    return 0;
}