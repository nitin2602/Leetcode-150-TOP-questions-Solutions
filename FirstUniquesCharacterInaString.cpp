class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> map;
        unordered_map <char,int> indexmap;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
            indexmap[s[i]]=i;
        }
        int index=INT_MAX;
        bool yes=false;
        for(auto x: map){
            if(x.second ==1){
                char let= x.first;
                index=min(index,indexmap[let]);
                yes=true;
            }
            
        }
        if(yes) return index;
        else return -1;
    }
};