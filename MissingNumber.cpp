class Solution {
public:
    int missingNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       if(nums[n-1]!=n){
           return n;
       }
       else if(nums[0]!=0){
           return 0;
       }
       else{
           int num;
           for(int i=0;i<nums.size();i++){
           if(nums[i+1]!=nums[i]+1){
                    num=nums[i]+1;
                    break;
                }
            }
            return num;          
       }
       
    }
};