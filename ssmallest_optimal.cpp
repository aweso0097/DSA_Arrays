#include <bits/stdc++.h>
using namespace std;

int ssmallest (vector <int> & arr) {
    if (arr.size() < 2) {
        return -1;
    }
    int smallest = arr[0];
    for (int i =0;i<arr.size();i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    int secondsmall = INT_MAX;
    for(int i =0;i < arr.size();i++) { 
        if(arr[i] < secondsmall && arr[i] != smallest) {
            secondsmall = arr[i];
        }
    }
    return secondsmall;
}
int main () {
    vector <int>arr = {34,45,67,89,21,54,34,89,67,90,45,37};
    cout << "The second smallest element in the vector is " << ssmallest(arr);
    return 0;
}