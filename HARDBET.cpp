//Problem name: HARDBET
//https://www.codechef.com/problems/HARDBET

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int A,B,C;
        cin >> A >> B >> C;

        if(A<B && A<C){
        cout << "Draw" << endl;
        }else if(B<A && B<C){
        cout << "Bob" << endl;
        }else{
        cout << "Alice" << endl;
        }
    }
    return 0;
}