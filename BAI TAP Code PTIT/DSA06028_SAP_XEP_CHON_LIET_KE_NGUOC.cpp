#include<vector>
#include<algorithm>
#include<iostream>
#include<string.h>

using namespace std;

void sapXepChon(vector<int> arr, int N){
    vector<string> result;
    for (int i = 0; i < N; i++) {
        int minIndex = i;
        for (int j = i+1; j < N; j++) {
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i){
               int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
        if(i != N - 1){
            string s = "";
            s += "Buoc ";
            s += to_string(i+1);
            s += ": ";
            for(int i = 0; i < N; i++) s+= to_string(arr[i]) + " ";
            result.push_back(s);
        }
    }
    for(int i = result.size()-1; i >=0; i--){
        cout << result[i] << endl;
    }
}

int main(){
    int N; cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];
    sapXepChon(arr, N);
    return 0;
}