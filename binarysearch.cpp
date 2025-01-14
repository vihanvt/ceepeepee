#include <bits/stdc++.h>
using namespace std;
int binary(vector <int> &arr, int target){
    int n=arr.size();
    int low=0,high=n-1;
    int mid=(low+high)/2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}
int main(){
    vector <int> arr={1,2,3,4,5,6};
    int target=4;
    int ans=binary(arr,target);
    cout<<"The index at which target exists is - "<<ans;
}