// class Solution
// {
// public:
//     int ways[100] = {0};
//     int climbStairs(int n)
//     {
//         // int ways[100]={0};

//         if (n == 0)
//             return 0;
//         if (n == 1)
//             return 1;
//         if (n == 2)
//             return 2;
//         if (ways[n] != 0)
//             return ways[n];
//         return ways[n] = climbStairs(n - 1) + climbStairs(n - 2);
//     }
// };

long long countWays(int m)
{
    long long dp[m + 1];

    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= m; i++)
    {

        dp[i] = dp[i - 2] + 1;
    }

    return dp[m];
}