#include <iostream>
using namespace std;

// 0+0=0
// 0+1=1 carry 0
// 1+1=0 carry 1
// 1+1+1=1 carry 1

// even binary number has 0 at last position
// odd binary number has 1 at last position

int addbinary(int a, int b)
{
    int ans = 0;
    int carry = 0;
    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans += ans * 10 + carry;
        }
        else if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            if (carry == 0)
            {
                ans += ans * 10 + 1;
            }
            else
            {
                ans += ans * 10 + 0;
                carry = 1;
            }
        }
        else
        {
            if (carry = 0)
            {
                ans += ans * 10 + 0;
            }
            else
            {
                ans += ans * 10 + 1;
            }
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }
    return ans;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    cout<<addbinary(num1, num2);
}