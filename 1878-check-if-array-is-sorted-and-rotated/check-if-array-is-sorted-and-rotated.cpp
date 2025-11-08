class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int> B = nums;
        sort(B.begin(), B.end());
        bool flag= false;
        for(int x=0;x<n;x++)
        {
           for(int i=0;i<n;i++)
           {
               if(B[i] != nums[(i+x) % n])
               {
                flag= false;
                break;
               }
               
               else
               {
                flag=true;
               }
           }
           if (flag)
           return true;
        }
        return false;
        
        
    }
};