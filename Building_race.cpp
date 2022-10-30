#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	 while(t--){
	     float a,b,x,y;
	     cin >> a >> b >> x >> y;
	     if((a/x)<(b/y)){
	         cout << "Chef" << endl;
	     }if((a/x)>(b/y)){
	         cout << "Chefina" << endl;
	     }if((a/x)==(b/y)){
	         cout << "Both" << endl;
	     }
	 }
	return 0;
}
