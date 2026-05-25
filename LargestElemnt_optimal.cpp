#include<bits/stdc++.h>
using namespace std;

int largest(vector <int> &arr) {
    int max = arr[0];
    for (int i = 0; i < arr.size();i++) {
        if (max < arr[i]) {
        max = arr[i];
        }
    }
        return max;
    
}
int main () {
    vector <int> arr1 = {3,5,23,21,33,56,77,35,78,39};
    vector <int> arr2 = {23,45,33,46,89,66,45,68,97};

    cout << "largest element in arr1 is "<< largest(arr1) <<endl;
    cout << "largest element in arr2 is "<< largest(arr2);
    return 0;
}