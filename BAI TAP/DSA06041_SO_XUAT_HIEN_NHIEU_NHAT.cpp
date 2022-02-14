#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        map<int, int> m;
        vector<int> array(N);
        for(int i = 0; i < N; i++) {
            cin >> array[i];
            m[array[i]]++;
        }

        int max = 0, result;
        bool checker = false;

        for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            if(it->second > N/2 && it->second > max){
                checker = true;
                result = it->first;
            }
        }
        
        if(checker) cout << result;
        else cout << "NO";
        cout << endl;
    }
    return 0;
}