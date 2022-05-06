#include<iostream>
#include<vector>

using namespace std;

vector<bool> check(10000);

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<int> arr_input(N);
        for(int i = 0; i < N; i++) cin >> arr_input[i];

        vector<int> arr(N);
        for(int i = 0; i < N; i++) arr[i] = i+1;

        int count = 1;
        while(1){
            bool check = true;

            for(int i = 0; i < N; i++){
                if(arr[i] != arr_input[i]) check = false;
            }

            if(check){
                cout << count;
                break;
            }
            // cout << check;
            int i = N-2;
            while(arr[i] > arr[i+1]) i--;
            if(i < 0) break;

            int k = N-1;
            while(arr[k] < arr[i]) k--;
            
            swap(arr[i], arr[k]);
            
            int r = N-1, l = i+1;
            while(l < r){
                swap(arr[l++], arr[r--]);
            }
            count++;
        }
        cout << endl;
    }


    return 0;
}