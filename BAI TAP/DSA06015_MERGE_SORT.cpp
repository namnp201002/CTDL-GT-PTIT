#include<iostream>
#include<vector>
// Bai nay chua AC dau, ahihi
using namespace std;

void merge(){
    
}

void mergeSort(vector<int> arr, int left, int right){
    if(left < right){
        int mid = (left + right)/2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);


    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

    }
}