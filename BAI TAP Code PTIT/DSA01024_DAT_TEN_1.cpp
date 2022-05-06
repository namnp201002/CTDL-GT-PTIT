#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    int N, K; cin >> N >> K;

    string s;
    set<string> ten;
    vector<string> result;

    while(N--){
        cin >> s;
        ten.insert(s); // loai bo nhung ten trung nhau va sap xep trong <set>
    }

    // day cac phan tu trong <set> vao <vector> result
    for(set<string>::iterator it = ten.begin(); it != ten.end(); it++) result.push_back(*it);

    int arr[K+5];
    for(int i = 1; i <= K; i++) arr[i] = i;

    // thuat toan sinh to hop
    while(1){
        for(int i = 1; i <= K; i++){
            cout << result[arr[i]-1] << " "; // in ra result co vi tri cua to hop chap K cua ten.size() phan tu
        }
        cout << endl;

        int j = K;
        while(j > 0 && arr[j] >= ten.size()-K+j) j--;
        if(j == 0) break;
        arr[j] += 1;
        for(int i = j+1; i <= K; i++){
            arr[i] = arr[j] + i - j;
        }
    }

    return 0;
}