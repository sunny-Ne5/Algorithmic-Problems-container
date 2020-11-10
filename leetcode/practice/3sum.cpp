
/*



*/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int> > ans;
        sort(begin(nums),end(nums));
        int n=nums.size();
        if(n==0)
            return {};
        for(int i=0;i<n;i++)
        {
            int target=(-1)*nums[i];
            int start=i+1,end=n-1;
            while(start<end)
            {
                int sum=nums[start]+nums[end];
                if(sum<=target)
                {
                    if(sum==target)
                    {
                        vector<int> triplet={nums[i],nums[start],nums[end]};
                        ans.push_back(triplet);
                        while(nums[start]==triplet[1] and start<end)
                            start++;
                        while(nums[end]==triplet[2] and start<end)
                            end--;
                    }
                    else
                        start++;
                }
                else if(sum>target)
                {
                    end--;
                }
            }
            while(i+1<n and nums[i]==nums[i+1])
                i++;
            
        }
        return ans;
        
        
        
    }
};