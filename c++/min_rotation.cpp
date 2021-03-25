class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int b = nums[0];
for(int i = 0; i < nums.size() - 1; i++)
{
    if(nums[i] > nums[i + 1])
    {
        b = nums[i + 1];
        break;
    }
    
}
        return b;
    }
};

