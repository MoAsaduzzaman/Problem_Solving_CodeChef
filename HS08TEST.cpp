//Problem name: HS08TEST
//https://www.codechef.com/problems/HS08TEST

#include<bits/stdc++.h>
using namespace std;
int main(){

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    int X;
    double ans,Y;

    cin >> X >> Y;

    ans = Y-X-.50;

    if(X%5==0 && Y-X-0.50>=0){
        cout << ans << endl;
    }else{
        cout << Y << endl;
    }

    return 0;
}
