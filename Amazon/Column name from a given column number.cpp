class Solution
{
public:
    string colName(long long int n)
    {
        
        string ans = "";

        while (n)
        {
            char ch = (n - 1) % 26 + 65;
            ans = ch + ans;
            n = (n - 1) / 26;
        }

        return ans;
    }