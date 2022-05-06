#include<iostream>
#include<queue>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int Q; cin >> Q;
        int N;
        queue<int> que;
        while(Q--){
            cin >> N;
            switch (N)
            {
            case 1:
                cout << que.size();
                break;
            case 2:
                if(que.empty()){
                    cout << "YES";
                }else cout << "NO";
                break;
            case 3:
                int m; cin >> m;
                que.push(m);
                break;
            case 4:
                if(!que.empty()){
                    que.pop();
                }
                break;
            case 5:
                if(!que.empty()){
                    cout << que.front();
                }else cout << "-1";
                break;
            case 6:
                if(!que.empty()){
                    cout << que.back();
                }else cout << "-1";
                break;
            default:
                break;
            }
            cout << endl;
        }
    }

    return 0;
}