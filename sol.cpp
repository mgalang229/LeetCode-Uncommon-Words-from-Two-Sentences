class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> mp;
        string word = "";
        for (char c : s1) {
            if (c != ' ') {
                word += c;
            } else {
                mp[word]++;
                word = "";
            }
        }
        mp[word]++;
        word = "";
        for (char c : s2) {
            if (c != ' ') {
                word += c;
            } else {
                mp[word]++;
                word = "";
            }
        }
        mp[word]++;
        vector<string> ans;
        for (auto& s : mp) {
            if (s.second == 1) {
                ans.push_back(s.first);
            }
        }
        return ans;
    }
};
