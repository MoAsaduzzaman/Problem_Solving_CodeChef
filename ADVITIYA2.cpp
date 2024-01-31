// Problem name: ADVITIYA2 
// https://www.codechef.com/problems/ADVITIYA2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        vector <int> a(5);
        int count = 0;

        for(int i=0; i<5; i++){
            cin >> a[i];
            if(a[i]==1){
                count++;
            }
        }

        if(count>=4){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}