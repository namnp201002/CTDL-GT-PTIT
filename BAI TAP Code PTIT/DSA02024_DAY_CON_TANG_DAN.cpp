#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// vector<> res;
int N;

void dayConTangDan(vector<int>& arr, int index){

    for(int i = index+1; i < N; i++){
        if(arr[index] < arr[i]){
            dayConTangDan(arr, i);
        }
    }

}

int main(){
    cin >> N;
    vector<int> arr(N);

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    dayConTangDan(arr, 0);


    return 0;
}