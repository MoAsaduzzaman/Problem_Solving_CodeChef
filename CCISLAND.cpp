//Problem name: CCISLAND 
//https://www.codechef.com/problems/CCISLAND

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int x,y,a,b,d;
        cin >> x >> y >> a >> b >> d;

        if((a*d)<=x && (b*d)<=y){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}