class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> result;
        int n=nums.size();
        unordered_map<int,int> mp(n+1);

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            if (mp[nums[i]] > 1) {
                result.push_back(nums[i]);
                mp[nums[i]] = 0;
            }
        }

        return result;
    }
};