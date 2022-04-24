# include <vector>
# include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> out;
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

int main() {
    std::cout << "Program Start\n";
    // instantiate your class here

    std::cout << "Program Won't Do Anything\n";
    std::cout << "End of programm\n";
    return 0;
}