// Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
// replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
// array. If no such integer exists that satisfies the above condition then return -1.

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {5,3,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    float kmin = INT_MIN;
    float kmax = INT_MAX;
    bool flag = false;
    for(int i = 1; i<n; i++){
        if(arr[i-1]-arr[i]<=0){
            float a = (arr[i-1]+arr[i])/2.0;
            kmax = min(kmax,a);
        }
        else{
            float b = (arr[i-1]+arr[i])/2.0;
            kmin = max(kmin,b);
        }
        if(kmin > kmax){
            flag = true;
            break;
        }
    }
    if(flag == true) cout << -1;
    else if(kmin == (int)kmax){
        if(kmin-(int)kmin == 0) cout << "The only value is: "<< kmin<< endl;
        else cout<< -1;
    }
    else {
        if(kmin-(int)kmin > 0) kmin = (int)kmin + 1;
        cout << kmin << " "<< (int)kmax << endl;
    }
    return 0;
}