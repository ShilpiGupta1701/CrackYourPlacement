class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int Arrsum=0;
        for(int i=0;i<n;i++)
        {
           Arrsum += nums[i];
           sum += (i+1);
        }

        return sum-Arrsum;

    }
};