class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        
        int pro= 1;
        int cnt = 0;
        int left = 0;

        for(int i=0; i<nums.size(); i++){
            pro*=nums[i];

            while(pro >= k){
                pro/=nums[left];
                left++;
            }
            cnt+= i-left+1;
        }
        
        return cnt;

    }
};