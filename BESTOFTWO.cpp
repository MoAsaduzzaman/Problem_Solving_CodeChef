//Problem name: BESTOFTWO
//https://www.codechef.com/problems/BESTOFTWO?tab=statement

#include <iostream>
using namespace std;
int main() {
	int N,x,y,i;

	cin >> N;
    
	for (i = 1; i <= N; i++) {
		cin >> x >> y;
		if (x > y) {
			cout << x << endl;
		}
		else {
			cout << y << endl;
		}
	}

    return 0;
}