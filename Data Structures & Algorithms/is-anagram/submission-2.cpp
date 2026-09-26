class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        // unordered_map<char,int> map1;
        // // unordered_map<char,int> map2;
        // for(int i=0; i<s.size(); i++){
        //     map1[s[i]]++;
        // }
        // for(auto x:t){
        //     if(map1.find(x)!=map1.end()){
        //         map1[x]--;
        //         if(map1[x]==0){
        //             map1.erase(x);
        //         }
        //     }
        //     else{
        //         return false;
        //     }
        // }
        // return true;
        vector<int> count(26,0);
        for(int i=0; i<s.length(); i++){
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }
        for(auto val:count){
            if(val!=0){
                return false;
            }
        }
        return true;
        

        
    }

};
