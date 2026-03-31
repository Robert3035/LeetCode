class Solution {
public:
    bool isPalindrome(int x) {
        //reject negative nums
        if(x < 0)
            return false;
        // make unput number a string
        string num = to_string(x);
        int len = num.length();

        //check pairs one at a time
        for(int i = 0; i < len / 2; i++){
            if(num[i] != num[len - 1 - i])
                return false;
        }
        return true;
    }
};
