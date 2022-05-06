#include<bits/stdc++.h>

using namespace std;

int main(){
    deque<string> dq;
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
            dq.push_back(res[++i]);
            continue;
        }

        if(res[i] == "PRINTFRONT"){
            if(dq.empty()){
                cout << "NONE\n";
                continue;
            }else{
                cout << dq.front() << endl;
                continue;
            }
        }
		if(res[i] == "POP"){
            if(dq.empty()) continue;
            else{
                dq.pop_front();
                continue;
            }
        }
    }

}
