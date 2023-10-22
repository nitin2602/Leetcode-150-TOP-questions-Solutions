class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        // using XOR approach bitwise


        int ans=0;
	   for(auto x:nums)
	   ans^=x;
	   return ans;



    //    Using unordered maps approach 

    
        unordered_map<int,int> value;
        int num;
        for(int i=0;i<nums.size();i++){
            value[nums[i]]++;
        }
        for(auto x:value){
            int a=x.second;
            if(a==1) {
                num=x.first;
            }
        }
        return num;
    }
};
