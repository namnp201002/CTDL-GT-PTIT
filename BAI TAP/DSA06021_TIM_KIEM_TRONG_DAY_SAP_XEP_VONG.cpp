#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N, X; cin >> N >> X;
        vector<int> arr(N);
        int index;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            if(arr[i] == X) index = i+1;
        }
        cout << index << endl;
    }
    return 0;
}