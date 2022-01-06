// Duplicate Number
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int l = nums.size();
        int r;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < l - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                r = nums[i];
            }
        }
        return r;
    }
};

// Missing Number

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        // int ans = 0;
        // for (int i = 0; i < nums.size(); i++)
        //     ans ^= nums[i]^(i+1);
        // return ans;

        // sort(nums.begin(),nums.end());
        // int left = 0, right = nums.size(), mid= (left + right)/2;
        // while(left<right){
        //     mid = (left + right)/2;
        //     if(nums[mid]>mid) right = mid;
        //     else left = mid+1;
        // }
        // return left;
        // }

        int len = nums.size();
        int sum = (0 + len) * (len + 1) / 2;
        for (int i = 0; i < len; i++)
            sum -= nums[i];
        return sum;
    }
};