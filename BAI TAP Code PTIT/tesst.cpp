#include<bits/stdc++.h>

using namespace std;

vector<int> sortEvenOdd(vector<int>& nums) {
    vector<int> even; // chan
    vector<int> odd; // le
    for(int i = 0; i < nums.size(); i++){
        if(i&1) odd.push_back(nums[i]);
        else even.push_back(nums[i]);
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());

    int count = min(even.size(), odd.size());
    vector<int> res;
    for(int i = 0; i < count; i++){
        res.push_back(even[i]);
        res.push_back(odd[i]);
    }

    if(count < odd.size()) res.push_back(odd[count]);
    if(count < even.size()) res.push_back(even[count]);

    return res;
}

int main(){


}