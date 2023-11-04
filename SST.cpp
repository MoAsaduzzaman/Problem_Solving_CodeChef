//Problem name: SST 
//https://www.codechef.com/problems/SST

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int A,B;
        cin >> A >> B;

        int ans1 = A*(100/10);
        int ans2 = B*(100/20);

        if(ans1>ans2){
            cout << "FIRST" << endl;
        }else if(ans1<ans2){
            cout << "SECOND" << endl;
        }else if(ans1==ans2){
            cout << "ANY" << endl;
        }
    }
    return 0;
}