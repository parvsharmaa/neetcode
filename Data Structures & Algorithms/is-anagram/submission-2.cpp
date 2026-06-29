class Solution {
public:
    // hashmap
    // bool isAnagram(string s, string t) {
    //     if (s.size() != t.size()) return false;
    //     unordered_map<char, int> mpp;
    //     for(int i=0; i<s.size(); i++){
    //         if(!mpp[s[i]]){
    //             mpp[s[i]] = 1;
    //         }else{
    //             mpp[s[i]]++;
    //         }
    //     }

    //     for(int i=0; i<t.size(); i++){
    //         if(!mpp[t[i]]){
    //             return false;
    //         }else{
    //             mpp[t[i]]--;
    //         }
    //     }

    //     for (const auto& [key, val] : mpp){
    //         if(val > 0) return false;
    //     }

    //     return true;
    // }

    // sort + compare
    // bool isAnagram(string s, string t) {
    //     if(s.size() != t.size()) return false;

    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());

    //     for(int i=0; i<s.size(); i++){
    //         if(s[i] != t[i]) return false;
    //     }

    //     return true;
    // }

    // constant array(26)
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        vector<int> counter(26,0);
        for(int i=0; i<s.size(); i++){
            counter[s[i] - 'a']++;
            counter[t[i] - 'a']--;
        }

        for(auto i: counter){
            if(i>0) return false;
        }

        return true;
    }
    
};
