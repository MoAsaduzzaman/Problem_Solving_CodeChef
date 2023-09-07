//Problem name: SNDMAX
//https://www.codechef.com/problems/SNDMAX

#include <iostream>
using namespace std;
int main(){
	int N,a,b,c;
	cin >> N;
	while(N--){
		cin >> a >> b >> c;
        
		if(a>=b && b>=c || a<=b && b<=c)
			cout << b << endl;
		else if(a>=c && c>=b || a<=c && b>=c)
			cout << c << endl;
		else
			cout << a << endl;
	}

    return 0;
}
