//Problem name: GDTURN
//https://www.codechef.com/problems/GDTURN

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i,sum;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        sum=X+Y;
        if(sum>6){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}