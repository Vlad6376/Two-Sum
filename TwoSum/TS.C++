class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        for(int i=0;i<nums.size();++i){
            for(int j=1+i;j<nums.size();++j){
               if(nums[i]+nums[j]==target){
                   out.push_back(i);
                   out.push_back(j);
                   break;
               } 
            }
        }
        return out;
    }
};