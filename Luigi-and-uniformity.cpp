#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int min =0, arr[n];
        
        cin >> arr[0];
        min = arr[0];
        for(int i=1;i<n;i++){
            cin >> arr[i];
            if(min>arr[i]){
                min = arr[i];
            }
        }
        int countNo=0;
        for(int i=0;i<n;i++){
            if(arr[i]==min){
                continue;
            }else if(arr[i]%min==0){
                countNo++;
            }else{
                countNo=n;
                break;
            }
        }
        
        cout << n-(n-countNo) << endl;
    }
    return 0;
}
