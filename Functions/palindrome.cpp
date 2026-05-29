#include<iostream>
using namespace std;

void palindrome(int n)
{
    int rem, rev = 0, temp;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;

        rev = rev * 10 + rem;

        n = n / 10;
    }

    if(temp == rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}

int main()
{
    int num;

    cout<<"Enter number: ";
    cin>>num;

    palindrome(num);

    return 0;
}
