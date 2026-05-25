#include<bits/stdc++.h>
using namespace std;

pair<int,int> secondelement(vector <int> &arr) {
    if (arr.size() == 1) {
        return {-1,-1};
    }
    sort(arr.begin(),arr.end());
    int second_min = arr[1];
    int second_max = arr[arr.size()-2];
    return {second_min,second_max};
}
int main () {
    vector<int> arr1 = {82,45,67,89,21,56,78,43,55,67,90,31,94,85};
    pair<int,int> result = secondelement(arr1);
    cout <<"The second smallest element is  " << result.first << endl;
    cout <<"The second largest element is  " << result.second;
}
