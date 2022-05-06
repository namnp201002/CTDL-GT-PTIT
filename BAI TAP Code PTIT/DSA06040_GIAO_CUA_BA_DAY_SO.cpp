#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N1, N2, N3; cin >> N1 >> N2 >> N3;

        vector<int> arr1(N1);
        vector<int> arr2(N2);
        vector<int> arr3(N3);
        for(int i = 0; i < N1; i++) cin >> arr1[i];
        for(int i = 0; i < N2; i++) cin >> arr2[i];
        for(int i = 0; i < N3; i++) cin >> arr3[i];

        int x = 0, y = 0, z = 0;
        bool check = false;

        while(x < N1 && y < N2 && z < N3){
            if(arr1[x] == arr2[y] && arr2[y] == arr3[z]){
                cout << arr1[x] << " ";
                x++; y++; z++;
                check = true;
            }else if(arr1[x] < arr2[y]) x++;
            else if(arr2[y] < arr3[z]) y++;
            else z++;
        }

        if(check == false) cout << "-1";
        cout << endl;
    }
    return 0;
}