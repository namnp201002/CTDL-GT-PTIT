#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

void sapXepNoiBot(vector<int> arr){
    vector<string> result;
    for(int i = 0; i < arr.size(); i++){
        bool check = true;
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                check = false;
            }
        }
        if(check) break;

        string s = "Buoc ";
        s += to_string(i+1) + ": ";
        for(int j = 0; j < arr.size(); j++){
            s += to_string(arr[j]) + " ";
        }
        result.push_back(s);
    }
    for(int i = result.size()-1; i >= 0; i--){
        cout << result[i] << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        sapXepNoiBot(arr);
    }
    return 0;
}