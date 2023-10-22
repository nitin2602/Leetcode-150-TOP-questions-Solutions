class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int> map;
        bool dis=false;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            if(map[nums[i]]>1) {dis =true;break;}
        }
        return dis;
    }
};