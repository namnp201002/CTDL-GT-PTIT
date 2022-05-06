#include<iostream>
#include<vector>
#include<string.h>

using namespace std;

void sapXepChen(vector<int> arr){
    vector<int> result;
    vector<string> step;
    for(int i = 0; i < arr.size(); i++){
        if(result.empty()){
            result.push_back(arr[i]);

            string s = "Buoc 0: ";
            s += to_string(arr[i]);
            step.push_back(s);
            
        }else{
            int j = result.size();
            result.push_back(arr[i]);

            while(result[j] < result[j-1] && j >= 1){
                swap(result[j], result[j-1]);
                j--;
            }

            string s = "Buoc ";
            s += to_string(i) + ": ";
            for(int j = 0; j < result.size(); j++){
                s += to_string(result[j]) + " ";
            }
            step.push_back(s);
        }
    }
    for(int i = step.size(); i >= 0; i--){
        cout << step[i] << endl;
    }
}
int main(){
    int N; cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    sapXepChen(arr);

    return 0;
}