#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
struct graph{
    int a, b;
};

bool compare(graph& x, graph& y){
    if(x.a == y.a) return x.b < y.b;
    return x.a < y.a;
}

int main(){
    int t; cin >> t;
    while(t--){
        int V, E; cin >> V >> E;

        vector<graph> arr;

        while(E--){
            graph num;
            cin >> num.a >> num.b;
            arr.push_back(num);
        }

        sort(arr.begin(), arr.end(), compare);

        for(int i = 1; i <= V; i++){

            cout << i << ": ";

            for(int j = 0; j < arr.size(); j++){

                if(arr[j].a == i){
                    cout << arr[j].b << " ";
                }else if(arr[j].b == i){
                    cout << arr[j].a << " ";
                }

            }
            
            cout << endl;
        }
    }
    return 0;
}