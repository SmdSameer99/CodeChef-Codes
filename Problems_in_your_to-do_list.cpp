#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, ans=0;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	        if(arr[i]>=1000)
	            ans++;
	    }
	    cout << ans << endl;
	}
	return 0;
}
