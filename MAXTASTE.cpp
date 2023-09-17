//Problem name: MAXTASTE
//https://www.codechef.com/problems/MAXTASTE

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,a,b,c,d;
    int max1,max2;
    cin >> T;
    while(T--){
        cin >> a >> b >> c >> d;
        if(a>=b){
            max1 = a;
        }else{
            max1 = b;
        }

        if(c>=d){
            max2 = c;
        }else{
            max2 = d;
        }

        cout << max1+max2 << endl;
    }

    return 0;
}