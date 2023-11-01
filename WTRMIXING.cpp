//Problem name: WTRMIXING 
//https://www.codechef.com/problems/WTRMIXING

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
            int A,B,X,Y;
            cin >> A >> B >> X >> Y;

        if(A<B){
        int ans = B-A;
            if(ans<=X){
            cout << "YES" << endl;
            }else{
            cout << "NO" << endl;
            }
        }

        if(A>B){
        int ans = A-B;
            if(ans<=Y){
            cout << "YES" << endl;
            }else{
            cout << "NO" << endl;
            }
        }

        if(A==B){
        cout << "YES" << endl;
        }
    } 

    return 0;
}