//Problem name: CS2023_GIFT
//https://www.codechef.com/problems/CS2023_GIFT

#include<iostream>
using namespace std;
int main(){

    int X,N,M,ans;

    cin >> X >> N >> M;

    ans = (X+M);

    if(ans>=N){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}