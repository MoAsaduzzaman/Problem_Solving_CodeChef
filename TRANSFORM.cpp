//Problem name: TRANSFORM
//https://www.codechef.com/problems/TRANSFORM

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X;
        cin >> X;

        if(X%3==1){
		    cout << "HUGE" << endl;
		}else if(X%3==2){
		    cout << "SMALL" << endl;
		}else{
		    cout << "NORMAL" << endl;
		}
    }
    return 0;
}