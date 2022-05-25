#include<bits/stdc++.h>

using namespace std;



vector<int> frequencySort(vector<int>& nums) {
    map<int, int> m;

    for(int i = 0; i < nums.size(); i++){
        m[nums[i]]++;
    }
    
    vector<pair<int, int>> vec;

    copy(m.begin(), m.end(), 
                back_inserter<vector<pair<int, int> > >(vec));

    sort(vec.begin(), vec.end(),
        [](const pair<int, int>& l, const pair<int, int>& r){
            if(l.second < r.second){
                return true;
            }
            if(l.second == r.second && l.first > r.first) return true;
            return false;
        }
    );

    vector<int> res;

    for(int i = 0; i < vec.size(); i++){
        while(vec[i].second--){
            res.push_back(vec[i].first);
        }
    }

    return res;

}

int main(){

    return 0;
}