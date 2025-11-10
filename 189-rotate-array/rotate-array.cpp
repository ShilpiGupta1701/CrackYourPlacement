class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // TC = SC =  O(n)
        int n= nums.size();
        // vector<int> v(n);
        // for(int i=n-1;i>=0;i--)
        // {
        //     v[(i+k)%n]=nums[i];
        // }
        // for(int i=0;i<n;i++)
        // nums[i] = v[i];

        // return;



        // TC = O(n + n) SC = O(1)
        k %=n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        

        return ;


    }
};