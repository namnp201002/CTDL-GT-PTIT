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
        if(res[i] == "PUSHBACK"){
            dq.push_back(res[++i]);
            continue;
        }
		if(res[i] == "PUSHFRONT"){
			dq.push_front(res[++i]);
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
		if(res[i] == "PRINTBACK"){
			if(dq.empty()){
                cout << "NONE\n";
                continue;
            }else{
                cout << dq.back() << endl;
                continue;
            }
		}
        if(res[i] == "POPBACK"){
            if(dq.empty()) continue;
            else{
                dq.pop_back();
                continue;
            }
        }
		if(res[i] == "POPFRONT"){
            if(dq.empty()) continue;
            else{
                dq.pop_front();
                continue;
            }
        }
    }

}
