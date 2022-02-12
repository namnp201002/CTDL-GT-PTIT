#include<bits/stdc++.h>

using namespace std;

struct number{
    int key, value;
};

bool compare(number &a, number &b){
    if(a.key > b.key) return true;
    if(a.key == b.key && a.value < b.value) return true;
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        map<int,int> m;
        

        vector<int> array(N);
        for(int i = 0; i < N; i++) {
            cin >> array[i];
            m[array[i]]++;
        }
        vector<number> num(m.size());

        int j = 0;

        for(map<int,int>::iterator it = m.begin(); it != m.end(); it++){
            num[j].value = it->first;
            num[j].key = it->second;
            j++;
        }

        sort(num.begin(), num.end(), compare);

        for(int i = 0; i < num.size(); i++){
            for(int j = 0; j < num[i].key; j++){
                cout << num[i].value << " ";
            }
        }
        cout << endl;
    }
    return 0;
}