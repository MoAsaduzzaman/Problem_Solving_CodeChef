//Problem name: TAXES
//https://www.codechef.com/problems/TAXES

#include<iostream>
using namespace std;
int main(){
    int T,X,i,a;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;
        if(X>100){
            a=X-10;
        }else{
            a=X;
        }

        cout << a << endl;
    }
    
    return 0;
}