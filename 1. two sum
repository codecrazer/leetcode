class Solution {
public:
    map<int,int>p;
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            if(p.find(nums[i])!=p.end())
            {
                vector<int>ans;
                ans.push_back(p.find(nums[i])->second);
                ans.push_back(i);
                return ans;
            }
            p.insert(make_pair(target-nums[i],i));
        }
    }
};
