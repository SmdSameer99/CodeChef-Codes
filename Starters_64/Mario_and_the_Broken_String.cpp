#include <iostream>
#include <string>
#include <string>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n, flage=1;
        cin >> n;
        string str;
        cin >> str;
        for(int i=0;i<(n/2);i++){
            if(str[i]!=str[(n/2)+i]){
                flage=0;
                break;
                
            }
        }
        if(flage==1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
