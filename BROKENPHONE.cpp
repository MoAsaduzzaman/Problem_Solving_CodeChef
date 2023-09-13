//Problem name: BROKENPHONE
//https://www.codechef.com/problems/BROKENPHONE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X,Y;

    cin >> T;

    while(T--){
        cin >> X >> Y;
        if(X<Y){
            cout << "REPAIR" << endl;
        }
        if(X>Y){
            cout << "NEW PHONE" << endl;
        }
        if(X==Y){
            cout << "ANY" << endl;
        }
    }

    return 0;
}