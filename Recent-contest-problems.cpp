#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n, UnAttemp=0, attemp=0;
        cin >> n;
        string arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]=="START38"){
                attemp++;
            }else{
                UnAttemp++;
            }
        }
        cout << attemp << " " << UnAttemp << endl;
    }
    return 0;
}
