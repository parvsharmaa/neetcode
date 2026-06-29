class Solution {
public:
    // sort + compare 
    // bool hasDuplicate(vector<int>& nums) {
    //     if(!nums.size()) return false;

    //     sort(nums.begin(), nums.end());

    //     for(int i=0; i<nums.size()-1; i++){
    //         if(nums[i] == nums[i+1])
    //             return true;
    //     }

    //     return false;
    // }

    // set + compare
    bool hasDuplicate(vector<int>& nums) {
        if(!nums.size()) return false;

        set<int> numset;
        numset.insert(begin(nums), end(nums));

        if(numset.size() != nums.size())
            return true;
        else
            return false;
        
    }
};