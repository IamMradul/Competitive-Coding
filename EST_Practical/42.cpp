class Solution {
public:
    int trap(vector<int>& height) {

        int start = 0;
        int end = height.size() - 1;

        int lmax = 0;
        int rmax = 0;
        int twater = 0;

        while(start < end){

            lmax = max(lmax, height[start]);
            rmax = max(rmax, height[end]);

            if(lmax < rmax){
                twater += lmax - height[start];
                start++;
            }
            else{
                twater += rmax - height[end];
                end--;
            }
        }

        return twater;
    }
};