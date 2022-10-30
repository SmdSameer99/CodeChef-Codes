#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, c;
	    cin >> a>> b >> c;
	    int ans=0;
	    if(a%2!=0){
	        ans++;
	    }if(b%2!=0){
	        ans++;
	    }if(c%2!=0){
	        ans++;
	    }
	    if(ans==2||ans==1){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
