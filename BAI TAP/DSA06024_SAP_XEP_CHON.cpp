#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

void print(vector<int> arr, int N){
    for(int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
}

void sapXepChon(vector<int> arr, int N){
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
                cout << "Buoc " << i+1 << ": ";
                print(arr, N);
            }
        }
}

int main(){
    int N; cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];
    sapXepChon(arr, N);
}