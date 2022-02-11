#include<iostream>

using namespace std;

int binarySearch(int left, int right, int arr[], int K){
    if(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == K) {
            return mid;
        }
        if(arr[mid] > K) return binarySearch(left, mid - 1, arr, K);
        if(arr[mid] < K) return binarySearch(mid + 1, right, arr, K);
    }
    return -1;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int N, K; cin >> N >> K;
        int arr[N+5];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        int result = binarySearch(0, N-1, arr, K);
        if(result == -1) cout << "NO";
        else cout << result + 1;
        cout << endl;
    }
    return 0;
}