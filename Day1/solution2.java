class Solution {
    public boolean isPalindrome(int x) {
        int rev = 0;
        int tmp = x;
        boolean val = false;
        while(tmp != 0){
            rev = rev*10 + tmp%10;
            tmp /= 10;
        }
        if(rev == x && x >= 0){
            val = true;
        }
        return val;
    }
}