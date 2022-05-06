#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main(){
    int N, K; cin >> N >> K;

    vector<int> result;
    set<int> s;

    int x;
    for(int i = 0; i < N; i++){
        cin >> x;
        s.insert(x); 
    }

    for(set<int>::iterator it = s.begin(); it != s.end(); it++) result.push_back(*it);

    int arr[K+5];
    for(int i = 1; i <= K; i++) arr[i] = i;

    // thuat toan sinh to hop
    while(1){
        for(int i = 1; i <= K; i++){
            cout << result[arr[i]-1] << " "; // in ra result co vi tri cua to hop chap K cua ten.size() phan tu
        }
        cout << endl;

        int j = K;
        while(j > 0 && arr[j] >= s.size()-K+j) j--;
        if(j == 0) break;
        arr[j] += 1;
        for(int i = j+1; i <= K; i++){
            arr[i] = arr[j] + i - j;
        }
    }

    return 0;
}