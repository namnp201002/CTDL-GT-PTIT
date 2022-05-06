#include<iostream>
#include<vector>

using namespace std;

void sapXepChen(vector<int> arr){
    vector<int> result;
    for(int i = 0; i < arr.size(); i++){
        if(result.empty()){
            result.push_back(arr[i]);
            cout << "Buoc 0: " << arr[i] << endl;
        }else{
            int j = result.size();
            result.push_back(arr[i]);

            while(result[j] < result[j-1] && j >= 1){
                swap(result[j], result[j-1]);
                j--;
            }

            cout << "Buoc " << i << ": ";
            for(int j = 0; j < result.size(); j++){
                cout << result[j] << " ";
            }
            cout << endl;
        }
    }

}
int main(){
    int N; cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    sapXepChen(arr);

    return 0;
}