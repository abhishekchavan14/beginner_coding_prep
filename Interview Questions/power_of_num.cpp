#include <bits/stdc++.h>
using namespace std;

// recursive: cant solve for negative expo
//cant handle decimal expo
double power(double b, double e)
{
    if (e > 0)
    {
        return b * power(b, e - 1);
    }
    else if (e < 0)
    {
        return (power(b, e + 1))/b;
    }
    else{
        return 1;
    }
}

int main()
{

    double base;
    double expo;
    cin >> base >> expo;

    // using c++ library function pow()
    //this can handle negative as well as decimal expo
     cout<<pow(base,expo);

    // without using pow()
    //cant handle decimal expo
    //  int i = 0;
    //  double ans = 1;
    //  if (expo < 0)
    //  {
    //      expo = -expo;
    //      while (i != expo)
    //      {
    //          ans *= base;
    //          i++;
    //      }
    //      ans = 1 / ans;
    //  }
    //  else
    //  {
    //      while (i != expo)
    //      {
    //          ans *= base;
    //          i++;
    //      }
    //  }
    //  cout<<ans;

    // recursive
    // cout << power(base, expo);
}

//if interviwer asks "Cant we handle decimal expo without pow?". We say "We can by using Newton Raphson method, but i dont recall it now" :)