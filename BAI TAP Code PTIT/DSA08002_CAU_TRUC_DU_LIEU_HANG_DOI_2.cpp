#include<bits/stdc++.h>

using namespace std;

int main(){
    int Q; cin >> Q;
    string s;
    deque<string> res;
    cin.ignore();
    while(Q--){
        getline(cin, s);
        string token;
        stringstream ss(s);
        while(ss >> token){
            res.push_back(token);
        }
    }

    deque<string> val;

    for(int i = 0; i < res.size(); i++){
        if(res[i] == "PUSH"){
            val.push_back(res[++i]);
            continue;
        }
        if(res[i] == "POP" && !val.empty()){
            val.pop_front();
            continue;
        }
        if(res[i] == "PRINTFRONT"){
            if(val.empty()) cout << "NONE\n";
            else cout << val.front() << "\n";
        }
    }
    return 0;
}