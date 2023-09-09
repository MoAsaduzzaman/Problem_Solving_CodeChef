//Problem name: FLOW006
//https://www.codechef.com/problems/FLOW006

#include<iostream>
using namespace std;
int main(){

    int T;

    cin >> T;

    while(T--){

        int N;

        cin >> N;

        int sum = 0;

        while(N!=0){

            int r = N%10;
            sum+= r;
            N /= 10;

        }
        cout<<sum<<endl;

    }

    return 0;
}
