#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> st;
    vector<string> res;
    string s;
    while(cin >> s){
        // if(s == ".") break;
        res.push_back(s);
    }

    for(int i = 0; i < res.size(); i++){
        if(res[i] == "push"){
            st.push_back(res[++i]);
            continue;
        }
        if(res[i] == "show"){
            if(st.empty()){
                cout << "empty\n";
                continue;
            }else{
                for(int i = 0; i < st.size(); i++){
                    cout << st[i] << " ";
                }
                cout << endl;
                continue;
            }
        }
        if(res[i] == "pop"){
            if(st.empty()) continue;
            else{
                st.pop_back();
                continue;
            }
        }
    }

}