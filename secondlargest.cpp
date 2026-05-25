#include<bits/stdc++.h>
using namespace std;

pair<int,int> secondelement(vector <int> &arr) {
    sort(arr.begin(),arr.end());
    int second_min = arr[1];
    int second_max = arr[arr.size()-2];
    return {second_min,second_max};
}
int main () {
    vector<int> arr1 = {23,45,67,21,44,69,54,66,92,78,82};
    pair<int,int> result = secondelement(arr1);
    cout <<"The second smallest element is  " << result.first << endl;
    cout <<"The second largest element is  " << result.second;
}
