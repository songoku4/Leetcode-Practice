class Solution {
public:
    int minSteps(string s, string t) {
        
        map<char,int>mp;
        for(auto c: s){
            mp[c]++;
            
        }
        for(auto c:t){
            mp[c]--;
        }
        int sol = 0;
        for(auto iter:mp){
            sol+=abs(iter.second);
        }
        return sol;
        
    }
};
