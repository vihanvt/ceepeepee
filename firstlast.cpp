#include <bits/stdc++.h>
using namespace std;
//program to find first and last appearance of an element using bs
int first(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            res = mid;
            high = mid - 1;//move left to check the first occurence
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return res;
}

int last(vector<int>& arr, int target) {
    int n = arr.size();
    int low = 0, high = n - 1;
    int res = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            res = mid;
            low = mid + 1; //move right to check the last occurrence
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 6};
    int target = 3;
    int firstoc = first(arr, target);
    int lastoc = last(arr, target);
    vector<int> res = {firstoc, lastoc};
    if (firstoc == -1 || lastoc == -1) {
        res = {-1, -1};
    }
    cout << "[" << res[0] << ", " << res[1] << "]" << endl;
    return 0;
}
