class Solution
{
public:
    bool canPair(vector<int> nums, int k)
    {
        // Code here.
        map<int, int> m;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            m[nums[i] % k]++;
        }
        for (int i = 0; i < n; i++)
        {
            int r = nums[i] % k;
            if (r == 0)
            {
                if (m[0] & 1)
                    return 0;
            }
            else if (m[r] != m[k - r])
                return 0;
        }
        return 1;
    }
};