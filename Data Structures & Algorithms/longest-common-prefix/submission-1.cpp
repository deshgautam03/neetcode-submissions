class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //*******Horizontal scanning**********
        // int n=strs.size();
        // // unordered_set<char> arr;
        // if(strs.empty()) return "";
        // string prefix=strs[0];
        // for(int i=1; i<n; i++){
        //     while(strs[i].substr(0,prefix.length())!=prefix){
        //         prefix=prefix.substr(0,prefix.length()-1);
        //         if(prefix==""){
        //             return "";
        //         }
        //     }
        // }
        // return prefix;



        //*********Vertical Scanning***********

        for(int i=0; i<strs[0].length(); i++){
            char c=strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(i>=strs[j].length() || strs[j][i]!=c){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};