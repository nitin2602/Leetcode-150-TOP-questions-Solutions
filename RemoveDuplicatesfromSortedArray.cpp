class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i = 1;
     int n=nums[0];
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != n) {
                nums[i] = nums[j];
                i++;
                n=nums[j];
            }
        }
        return i;   
    }
};