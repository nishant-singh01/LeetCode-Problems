//-----Sorting-Based Approach-----

    
int n=nums.size();
sort(nums.begin(),nums.end());

return (nums[n-1]-1)*(nums[n-2]-1);



// -----Optimal Approach-----
int first = 0, second = 0;

for (int num : nums) {
    if (num > first) {
        second = first;
        first = num;
    } else if (num > second) {
        second = num;
    }
}

return (first - 1) * (second - 1);
