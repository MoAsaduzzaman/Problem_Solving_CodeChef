//Problem name: CREDITS
//https://www.codechef.com/problems/CREDITS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,X;
    cin >> T;
    while(T--){
        cin >> X;
        if(X>65){
            cout << "Overload" << endl;
        }else if(X<35){
            cout << "Underload" << endl;
        }else{
            cout << "Normal" << endl;
        }
    }
    return 0;
}