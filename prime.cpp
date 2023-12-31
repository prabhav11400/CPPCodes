#include <iostream>
using namespace std;

int checkPrimeNumber(int);

int main()
{
    int n1, n2;
    bool flag;

    cout << "Enter 1st Interval :: ";
    cin >> n1 ;
    cout << "\nEnter 2nd Interval :: ";
    cin >> n2 ;

    cout << "\nPrime numbers between [ " << n1 << " and " << n2 << " ] are :: \n\n";

    for(int i = n1+1; i < n2; ++i)
    {
        // If i is a prime number, flag will be equal to 1
        flag = checkPrimeNumber(i);

        if(flag == false)
            cout << i << " ";
    }
    return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n)
{
    bool flag = true;

    for(int j = 2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}