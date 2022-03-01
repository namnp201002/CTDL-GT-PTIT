#include<iostream>
#include<vector>
// Bai nay chua AC dau, dang bi TLE sml neee!!!
using namespace std;

vector<int> mergeSort(vector<int> arr, int left, int right){
    if(left == right){
        vector<int> singleElement(1, arr[left]);
        return singleElement;
    }

    int mid = (left + right)/2;

    vector<int> arr1 = mergeSort(arr, left, mid);
    vector<int> arr2 = mergeSort(arr, mid + 1, right);
        
    int n = arr1.size() + arr2.size();
    vector<int> result(n);

    int i = 0, i1 = 0, i2 = 0;
    while(i<n){
        if(i1 < arr1.size() && i2 < arr2.size()){
            if(arr1[i1] <= arr2[i2]){
                result[i] = arr1[i1++];
                i++;
            }else {
                result[i] = arr2[i2++];
                i++;
            }
        }else{
            if(i1 < arr1.size()){
                result[i] = arr1[i1++];
                    i++;
            }else {
                result[i] = arr2[i2++];
                i++;
            }
        }
    }
    return result;
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        vector<int> result = mergeSort(arr, 0, arr.size()-1);
        for(int i = 0; i < arr.size(); i++){
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}