class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int product=1;
        sort(nums.begin(),nums.end());
        
        for(int i=nums.size()-3;i<nums.size();i++){
            product*=nums[i];
        }

        return product;
    }
};