class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int l = nums.size();
        int maxSub = -99999;
        int sum = 0;

        // for(int i=0;i<l;i++)
        // {
        //     sum = sum + nums[i];
        //     maxSub = max(sum,maxSub);
        //   if (sum < 0)
        // {
        //     sum = 0;
        // }
        // }
        // return maxSub;

        for (int i = 0; i < l; i++)
        {
            sum = sum + nums[i];

            if (maxSub < sum)
            {
                maxSub = sum;
            }

            if (sum < 0)
            {
                sum = 0;
            }
        }

        return maxSub;
    }
};