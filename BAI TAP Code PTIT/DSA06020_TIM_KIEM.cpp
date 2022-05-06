#include<iostream>

using namespace std;

int binarySearch(int left, int right, int arr[], int K){
    if(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == K) {
            return 1;
        }
        if(arr[mid] > K) return binarySearch(left, mid - 1, arr, K);
        if(arr[mid] < K) return binarySearch(mid + 1, right, arr, K);
    }
    return -1;
}


int main(){
    int t; cin >> t;
    while(t--){
        int N, X; cin >> N >> X;

        int arr[N+5];
        for(int i = 0; i < N; i++) cin >> arr[i];
        cout << binarySearch(0, N-1, arr, X) << endl;
    }
    return 0;
}