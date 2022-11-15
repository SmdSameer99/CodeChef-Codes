#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int i, d, h, c;
        cin >> i >> d >> h >> c;
        int ans = i-d;
        if(ans==0){
            cout<<"YES"<<endl;
        }else if(ans>0 && ans<=c){
            cout<<"YES"<<endl;
        
        }else if(ans<0 && (ans*-1)<=h){
            cout<<"YES"<<endl;
        }else{
            cout << "NO" << endl;
        }
        
        
    }
    return 0;
}
