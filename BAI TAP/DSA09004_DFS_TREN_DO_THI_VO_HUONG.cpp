#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N, M, u; cin >> N >> M >> u;
        
        vector<vector<int> > arr(N+1, vector<int>(N+1));

        while(M--){
            int x, y; cin >> x >> y;
            arr[x][y] = 1;
            arr[y][x] = 1;
        }

        stack<int> s;
        vector<int> vs(N+1);
        vs[u] = 1;
        s.push(u);
        cout << u << " ";
        while(!s.empty()){
            int v = s.top();
            int check = 0;
            for(int i = 1; i <= N; i++){
                if(arr[v][i] && !vs[i]){
                    vs[i] = 1;
                    cout << i << " ";
                    check = 1;
                    s.push(i);
                    break;
                }
            }
            if(!check) s.pop();
        }
        cout << endl;
    }
    return 0;
}