// Find the minimum operations required to sort the array in increasing order. In one operation ,
// you can set each occurrence of one element to 0.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {3,2,3,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    int idx = 0;
    for(int i=0; i<n-1; i++){
        bool flag = false;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = true;
            }
        }
        if(flag == false) {
            idx = i+1;
            break;
        }
    }
    if(idx == 0) cout<< n-1 << " Operations is required to completely sort an array.";
    else cout<< idx << " Operation is required to completely sort an array.";
    return 0;
}