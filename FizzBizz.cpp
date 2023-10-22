class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vec(n,"1");
        for(int i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0){
                vec[i]="FizzBuzz";
            }
            else if((i+1)%3==0){
                vec[i]="Fizz";
            }
            else if((i+1)%5==0){
                vec[i]="Buzz";
            }
            else {
                vec[i]=to_string(i+1);
            }
        }
        return vec;
    }
};