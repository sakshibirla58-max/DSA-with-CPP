#include<iostream>
using namespace std;
int prime(int n)
    {
         if(n <= 1)
        return 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
    }
int main(){
    // if (prime(8))
    // cout << "PRIME";
    // else
    // cout << "NOT PRIME";

    cout << "prime numbers from 2 t0 10 are"<<endl;
    for (int i = 2; i <= 10; i++){
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
