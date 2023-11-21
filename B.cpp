
#include <iostream>

using namespace std;
bool issame(int a, int b){
    if(a>0 and b>0) return true;
    if(a<0 and b<0) return true;
    return false;
}
int main() {
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=1; i<n; i++){
        if(issame(arr[i-1], arr[i])){
            cout<< arr[i-1]<<" "<<arr[i]<<endl;
        }
    }
  
    return 0;
}