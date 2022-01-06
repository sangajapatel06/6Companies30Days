
#include <bits/stdc++.h>
using namespace std;

int lastPosition(int n, int m, int k)
{

    if (m <= n - k + 1)
        return m + k - 1;

    m = m - (n - k + 1);

    return (m % n == 0) ? n : (m % n);
}

int main()
{
    int n = 5;
    int m = 8;
    int k = 2;
    cout << lastPosition(n, m, k);
    return 0;
}