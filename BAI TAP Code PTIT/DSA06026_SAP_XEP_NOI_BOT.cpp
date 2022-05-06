#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> arr, int index){
    cout << "Buoc " << index << ": ";
    for(int i = 0; i < arr.size(); i++) cout << arr[i] << " ";
    cout << endl;
}

void sapXepNoiBot(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        bool check = true;
        for(int j = 0; j < arr.size() - i - 1; j++){
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                check = false;
            }
        }
        if(check) break;
        print(arr, i+1);
    }
}
int main(){
    int N; cin >> N;

    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    sapXepNoiBot(arr);
    return 0;
}