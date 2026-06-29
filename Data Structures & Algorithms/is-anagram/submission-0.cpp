class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> mpp;
        for(int i=0; i<s.size(); i++){
            if(!mpp[s[i]]){
                mpp[s[i]] = 1;
            }else{
                mpp[s[i]]++;
            }
        }

        for(int i=0; i<t.size(); i++){
            if(!mpp[t[i]]){
                return false;
            }else{
                mpp[t[i]]--;
            }
        }

        for (const auto& [key, val] : mpp){
            if(val > 0) return false;
        }

        return true;
    }
};
