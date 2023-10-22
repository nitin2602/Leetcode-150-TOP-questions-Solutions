class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n=digits.size();
    if (digits[n - 1] != 9)
    {
        digits[n - 1]++;
    }
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {   if (i == 0)
                    {
                        digits.resize(n+1);
                        digits[0] = 1;
                    }
                    else{
                        digits[i] = 0;
                        if(digits[i-1]!=9){
                            digits[i - 1]++;
                            break;
                        }
                        
                    }
            }
        }
    
    }
    return digits;
    }
};