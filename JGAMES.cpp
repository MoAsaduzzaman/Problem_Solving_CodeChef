//Problem name: JGAMES
//https://www.codechef.com/problems/JGAMES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int X,Y;
        cin >> X >> Y;

        int ans = X+Y;

        if(ans%2==0){
            cout << "Janmansh" << endl;
        }else{
            cout << "Jay" << endl;
        }
    }

    return 0;
}