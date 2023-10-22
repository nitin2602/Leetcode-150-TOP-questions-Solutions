class Solution {
public:
    bool isPalindrome(string s) {
        string string,stringreverse;
    
   
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            string+=tolower(s[i]);
        }
    }
    stringreverse.resize(string.size());
    int j=0;
    for(int i=stringreverse.size()-1;i>=0;i--){
        stringreverse[j]=string[i];
        j++;
    }
    return string==stringreverse;
    }
};