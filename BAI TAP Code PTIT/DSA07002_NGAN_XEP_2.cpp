#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> st;
    vector<string> res;
    string s;
    int Q; cin >> Q;
    cin.ignore();
    while(Q--){
        getline(cin, s);
        string token;
        stringstream ss(s);
        while(ss >> token){
            res.push_back(token);
        }
    }

    for(int i = 0; i < res.size(); i++){
        if(res[i] == "PUSH"){
            st.push_back(res[++i]);
            continue;
        }
        if(res[i] == "PRINT"){
            if(st.empty()){
                cout << "NONE\n";
                continue;
            }else{
                cout << st[st.size()-1] << endl;
                continue;
            }
        }
        if(res[i] == "POP"){
            if(st.empty()) continue;
            else{
                st.pop_back();
                continue;
            }
        }
    }

}