//Problem no: ONEFULPAIRS
//https://www.codechef.com/problems/ONEFULPAIRS

#include<iostream>
using namespace std;
int main(){

    int a,b,ans;

    cin >> a >> b;

    ans = a + b + (a*b);

    if(ans==111){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
        
    return 0;
}