//Problem name: HIGHSCORE
//https://www.codechef.com/problems/HIGHSCORE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int arr[5],max=0;
        for(int i=0; i<4; i++){
            cin >> arr[i];
        }
        for(int i=0; i<4; i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        cout << max << endl;
    }
    return 0;
}