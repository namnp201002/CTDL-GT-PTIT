#include<bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){

        string s;
        vector<string> st;
        getline(cin, s);

        stringstream ss(s);
        string token;

        while(ss >> token){
            st.push_back(token);
        }
        
        for(int i = st.size()-1; i >= 0; i--){
            cout << st[i] << " ";
        }
        cout << endl;
    }
    return 0;
}