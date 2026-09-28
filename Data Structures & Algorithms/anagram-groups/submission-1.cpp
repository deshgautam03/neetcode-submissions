class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string, vector<string>> groups;

        // for (const string& s : strs) {
        //     string key = s;
        //     sort(key.begin(), key.end());
        //     groups[key].push_back(s);
        // }

        // vector<vector<string>> result;
        // for (auto& pair : groups) {
        //     result.push_back(pair.second);
        // }

        // return result;

        // unordered_map<unordered_map<string,vector<string>> freq;
        unordered_map<string,vector<string>> freq;

        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            if(freq.find(key)!=freq.end()){
                freq[key].push_back(s);
            }
            else{
                freq[key]={s};
            }
        }
        vector<vector<string>> ans;
        for(auto p:freq){
            ans.push_back(p.second);
        }
        return ans;























    }
};