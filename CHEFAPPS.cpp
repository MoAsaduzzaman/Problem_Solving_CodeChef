//Problem name: CHEFAPPS
//https://www.codechef.com/problems/CHEFAPPS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,S,X,Y,Z;
    cin >> T;
    while(T--){
        cin >> S >> X >> Y >> Z;
        int req_space = X+Y+Z;
        int rp1 = S-X;
        int rp2 = S-Y;

        if(S>=req_space){
            cout << 0 << endl;
        }else if(rp1>=Z || rp2>=Z){
                cout << 1 << endl;
        }else if(req_space>S){
                cout << 2 << endl;
        }
    }
    return 0;
}