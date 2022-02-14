#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>

using namespace std;

void sapXepDoiChoTrucTiep(vector<int> arr, int N){
    vector<string> result;
    for(int i = 0; i < N-1; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        string s = "";
        s += "Buoc ";
        s += to_string(i+1);
        s += ": ";
        for(int i = 0; i < N; i++) s+= to_string(arr[i]) + " ";
        result.push_back(s);
    }
    for(int i = result.size()-1; i >= 0; i--){
        cout << result[i] << endl;
    }
}

using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];
        sapXepDoiChoTrucTiep(arr, N);
    }
    return 0;  
}