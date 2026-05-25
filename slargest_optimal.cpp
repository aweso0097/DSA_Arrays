#include<bits/stdc++.h>
using namespace std;

int slargest(vector <int> &arr) {
    if (arr.size() < 2) {
        return -1;
    }
    int largest = arr[0];
    for(int i =0;i <arr.size();i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    int slargest = -1;
    for(int i =0;i < arr.size();i++) {
        if (arr[i] > slargest && arr[i] != largest) {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main () {
    vector <int> arr1 = {3,5,23,21,33,56,77,35,78,39};
    cout << "The second  largest element is " << slargest(arr1);
    return 0;
}