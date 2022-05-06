#include<iostream>
#include<vector>
#include<algorithm>

// Bai nay minh xu ly hoi cong kenh :)))

using namespace std;

int a[2] = {0, 1};
vector<int> s(50);
bool check = false; //kiem tra xem co day con hay khong

void print(int N, vector<int> &arr){
    cout << "[";
    vector<int> result; // mang nay dung de luu ket qua cua day con co tong bang K
    for(int i = 0; i < N; i++){
        if(s[i] == 1){
            result.push_back(arr[i]);
        }
    }

    for(int i = 0; i < result.size(); i++){
        cout << result[i];
        // cho nay la in ra cac phan tu sao cho co dang [1 2 3 4]
        if(i != result.size()-1){
            cout << " ";
        }else cout << "]";
    }
    cout << " ";
}

void kiemTraTong(vector<int> &arr, int N, int K){
    int sum = 0;
    // tinh tong day con 
    for(int i = 0; i < N; i++){
        if(s[i] == 1){
            sum += arr[i];
        }
    }
    // neu sum == K thi in ra day con co tong bang K
    if(sum == K){
        print(N, arr);
        check = true;
    }
}

// sinh nhi phan de xet het cac truong hop nha mn
void dayConCoTongBangK(vector<int>& arr, int N, int m, int& K){
    for(int i = 1; i >= 0; i--){
        s[m] = a[i];
        if(m == N-1){
            kiemTraTong(arr, N, K);
        }else dayConCoTongBangK(arr, N, m+1, K);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int N, K; cin >> N >> K;

        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        // vi de bai y/c phai in ra theo thu tu tu dien nen minh doan nay phai sort
        sort(arr.begin(), arr.end());

        dayConCoTongBangK(arr, N, 0, K);

        if(check == false) cout << "-1";
        cout << endl;

        check = false;
        
    }
    return 0;
}