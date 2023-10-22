class Solution {
    private :
    bool isint(int a){
        return true;
    }
    bool isfloat(float a){
        return true;
    }
public:
    bool isPowerOfThree(int n) {
        if(n%2==0) return false;
        else if (n==1) return true;
        else if (n==3) return true;
        else if(n%5==0) return false;
        else if (n==9) return true;
        else if (n%3!=0) return false;
        else{
            return isPowerOfThree(n/3);
            }
           
        }
        
    
};