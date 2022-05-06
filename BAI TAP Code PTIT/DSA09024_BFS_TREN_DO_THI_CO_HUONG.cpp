#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N, M, u; cin >> N >> M >> u;
        
        vector<vector<int> > arr(N+1, vector<int>(N+1));
        vector<int> vs(N+1);
        while(M--){
            int x, y; cin >> x >> y;
            arr[x][y] = 1;
        }

        cout << u << " ";
        
        deque<int> q;
        q.push_back(u);
        vs[u] = 1;
        while(!q.empty()){
            int v = q.front();
            for(int i = 1; i <= N; i++){
                if(!vs[i] && arr[v][i]){
                    vs[i] = 1;
                    q.push_back(i);
                    cout << i << " ";
                }
            }
            q.pop_front();
        }

        cout << endl;
    }
    return 0;
}