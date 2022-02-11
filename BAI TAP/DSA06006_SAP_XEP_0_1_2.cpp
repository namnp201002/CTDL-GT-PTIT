#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        deque<int> dq;

        int array[N+5];
        for(int i = 0; i < N; i++){
            cin >> array[i];
            if(array[i] == 0) cout << "0 ";
            else if(array[i] == 1){
                dq.push_front(1);
            }else dq.push_back(2);
        }
        while(!dq.empty()){
            int x = dq.front();
            cout << x << " ";
            dq.pop_front();
        }
        cout << endl;
    }


    return 0;
}