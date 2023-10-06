//Problem name: SALE
//https://www.codechef.com/problems/SALE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        vector <int> items(3);

        for(int i=0; i<3; i++){
            cin >> items[i];
        }

        sort(items.begin(),items.end());

        int ans = items[1]+items[2];

        cout << ans << endl;
    }

    return 0;
}