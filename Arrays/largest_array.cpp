#include<iostream>
#include<climits>
using namespace std;
int main() {
    int nums[6] = {5, 15, 22, 1, -15, -24};
    int size = 6;
    int Largest = INT_MIN;
    for(int i=0; i<size; i++){
      if(nums[i] > Largest)
        Largest = nums[i];
    }
    cout << " Largest = " << Largest << endl;
    return 0;
}
