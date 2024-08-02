class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>zeros,ones,twos;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0)
                zeros.push_back(0);
            else if(nums[i] == 1)
                ones.push_back(1);
            else
                twos.push_back(2);
        }

        ones.insert(ones.end(),twos.begin(),twos.end());
        zeros.insert(zeros.end(),ones.begin(),ones.end());
        nums = zeros;
    }
};