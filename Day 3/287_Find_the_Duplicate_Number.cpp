class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end())
                mp[nums[i]] = 1;
            else
                mp[nums[i]]++;
        }
        int num = 0;
        for(auto& it:mp){
            if(it.second>1)
                num = it.first;
        }

        return num;
    }
};