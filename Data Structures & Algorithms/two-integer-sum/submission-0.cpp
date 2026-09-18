class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> res(2);
        int i=0;
        while (i<nums.size()-1){
            int j=i+1;
            while (j<nums.size()){
                if (nums[i]+nums[j]==target){
                    res[0]=i;
                    res[1]=j;
                    return res;
                }
                j++;
            }
            i++;
        }
    }
};
