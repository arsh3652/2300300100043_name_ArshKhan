#include<iostream>
#include<vector>
using namespace std;
void prefixsum(int arr[],int n){
    vector<int> abc;
    abc.push_back(arr[0]);
    for(int i=1;i<n;i++){
            abc.push_back(abc[i-1]+arr[i]);
    }
    cout << "\nPrefix sums: ";
    for (int val : abc) {
        cout << val << " ";
    }
    cout << endl;

}
int main() {
  int arr[5];
  for(int i=0;i<5;i++){
    cin >> arr[i];
  }
  int a;
  for(a=0;a<5;a++){
      cout << arr[a];
  }
  prefixsum(arr,5);
}
