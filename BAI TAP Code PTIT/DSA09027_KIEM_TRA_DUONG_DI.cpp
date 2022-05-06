#include<iostream>
#include<vector>
#include<stack>

using namespace std;

struct graph{
    int a, b;
};

void dfs(vector<vector<int> >& arr, vector<int>& vs, int u, int x, int N){
    stack<int> s;
    s.push(u);
    vs[u] = 1;
    while(!s.empty()){
        int v = s.top();
        int check = 1;
        for(int i = 1; i <= N; i++){
            if(vs[i] == 0 && arr[v][i] ==1){
                if(x == i){
                    vs[i] = 1;
                    return;
                }
                s.push(i);
                vs[i] = 1;
                check = 0; break;
            }
        }
        if(check == 1) s.pop();
    }
}

void kiemTraDuongDi(vector<vector<int> >& arr , vector<int>& vs, int N, int u, int v){
    dfs(arr, vs, u, v, N);
    if(vs[v] == 1) cout <<"YES";
    else cout << "NO";
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int N, M; cin >> N >> M;

        vector<vector<int> > arr(N+1, vector<int>(N+1));

        graph doThi;
        while(M--){
            cin >> doThi.a >> doThi.b;
            arr[doThi.a][doThi.b] = 1;
            arr[doThi.b][doThi.a] = 1;
        }

        int Q; cin >> Q;
        while(Q--){
            graph question;
            cin >> question.a >> question.b;
            vector<int> vs(N+1);

            kiemTraDuongDi(arr, vs, N, question.a, question.b);
        }  
    }
    return 0;
}