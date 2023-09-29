#include <iostream>
using namespace std;
// 1010
// digit by digit--> 0*1 + 1*2 + 0*4 + 1*8

int convert(int n)
{
    int ans = 0;
    int twopower = 1;
    while (n > 0)
    {
        int lastdigit = n % 10;
        ans = ans + (lastdigit * twopower);
        n = n / 10;
        twopower = twopower * 2;
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    cout << convert(num);
}