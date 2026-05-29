#include<iostream>
using namespace std;
   int reverseArray(int arr[],int sz){
    int start = 0, end = sz-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7,};
    int sz = 7;
    reverseArray(arr, sz);
    for(int i = 0; i<sz; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;

    // int arr[5] = {2,5,4,6,7};
    // for(int i=4; i>=0; i--)
    // {
    //     cout<<arr[i]<<" ";
    // }

    
    return 0;
}
