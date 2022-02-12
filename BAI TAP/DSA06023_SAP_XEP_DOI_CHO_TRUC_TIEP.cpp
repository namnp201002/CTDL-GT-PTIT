#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void print(vector<int> arr, int N){
    for(int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
}

void sapXepDoiChoTrucTiep(vector<int> arr, int N){
    for(int i = 0; i < N-1; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
        cout << "Buoc " << i+1 << ": ";
        print(arr, N);
    }
}

using namespace std;
int main(){
    int N; cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];
    sapXepDoiChoTrucTiep(arr, N);
    return 0;  
}