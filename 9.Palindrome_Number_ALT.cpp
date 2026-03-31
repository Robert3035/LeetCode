class Solution {
public:
    bool isPalindrome(int x) {
        //reject negative nums
        if(x < 0)
            return false;
        long y = 0;
        int original = x;
        int digit;

        //check pairs one at a time
        while(x > 0){
            //get value in 1s place
            digit = x % 10;

            //add it to y
            y *= 10;
            y += digit;

            //remove that value from x
            x /= 10;
        }
        return y == original;
    }
};
