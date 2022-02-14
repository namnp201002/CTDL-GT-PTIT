#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool compare(int &a, int &b){
    return a > b;
}
int main(){
    int N; cin >> N;

    vector<int> arr(N);
    vector<int> arr_chan;
    vector<int> arr_le;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        if(i%2 == 0) arr_le.push_back(arr[i]);
        else arr_chan.push_back(arr[i]);
    }

    sort(arr_le.begin(), arr_le.end());
    sort(arr_chan.begin(), arr_chan.end(), compare);

    int x = 0, y = 0;
    for(int i = 0; i < N; i++){
        if(i%2 == 0){
            cout << arr_le[x++];
        }else{
            cout << arr_chan[y++];
        }
        cout << " ";
    }
    
    return 0;
}