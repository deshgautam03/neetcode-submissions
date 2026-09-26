class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        // unordered_set<char> arr;
        if(strs.empty()) return "";
        string prefix=strs[0];
        for(int i=1; i<n; i++){
            while(strs[i].substr(0,prefix.length())!=prefix){
                prefix=prefix.substr(0,prefix.length()-1);
                if(prefix==""){
                    return "";
                }
            }
        }
        return prefix;
    }
};