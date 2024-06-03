// Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {2,4,6,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    int k;
    cout<< "Enter the value of k: ";
    cin>>k; 
    int a = 0;
    int idx = 0;
    for(int i = 0; i<n-1; i++){
        int min = INT_MAX;
        for(int j = i; j<n; j++ ){
            if(arr[j] < min){
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[a],arr[idx]);
        a++;
    }
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    cout<< arr[k-1]<<endl;
    return 0;
}