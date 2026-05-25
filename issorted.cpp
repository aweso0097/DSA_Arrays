#include<bits/stdc++.h>
using namespace std;

bool issorted(vector<int> &arr) {
    for (int i = 1;i<arr.size();i++) {
        if(arr[i] < arr[i-1]) { //violation condition
        return false;  //return immediately if violated
        }
    }
    return true;
}
int main () {
    vector <int> arr1 = {3,5,11,15,16,19,32,45,67,89};
    cout <<boolalpha<<"is arr1 sorted \n" <<issorted(arr1);
}