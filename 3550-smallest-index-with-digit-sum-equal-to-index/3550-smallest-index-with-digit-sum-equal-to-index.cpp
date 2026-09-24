class Solution {
public:
    int digitsum(int n){
        int s=0;
        while(n!=0){
            int d = n%10;
            s+=d;
            n/=10;
        }
        return s;
    }
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i==digitsum(nums[i])){
                return i;
            }
        }
        return -1;
    }
};