class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[a] == 0 && nums[i]!=0){
                swap(nums[a],nums[i]);
                a++;
            }

            if(nums[a] != 0)
                a++;
        }
    }
};