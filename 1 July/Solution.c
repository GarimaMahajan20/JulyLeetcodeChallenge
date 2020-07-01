class Solution {
    public int arrangeCoins(int n) {
        if(n==0||n==1){
            return n;
        }
        int i =1;
        int j =-1;
        while(n>0){
            n=n-i;
            if(n>=0){
                j=i;
            }
            i++;
        }
        return j;
    }
}