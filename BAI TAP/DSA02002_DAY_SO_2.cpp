#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];
        vector<string> result;

        string s = "[";
        for(int i = 0; i < N; i++){
            s += to_string(arr[i]);
            if(i!=N-1) s += " ";
        }
        s += "]";
        result.push_back(s);

        while(N > 1){
            string s = "[";

            for(int i = 0; i < N-1; i++){

                s += to_string(arr[i] + arr[i+1]);
                arr[i] += arr[i+1];

                if(i != N-2) s += " ";
            }
            
            s += "]";

            result.push_back(s);
            N--;
        }
        for(int i = result.size()-1; i >= 0; i--) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}