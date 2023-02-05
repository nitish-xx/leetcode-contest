class Solution {
public:
   vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& qrs) {
         int n = words.size();
        vector<int> sum(n);
        unordered_set<char> vowels({'a', 'e', 'i', 'o', 'u'});
        for (int i = 0; i < n; i++) {
            if (vowels.count(words[i][0]) && vowels.count(words[i][words[i].size() - 1])) {
                sum[i] = 1;
            }
        }
        for (int i = 1; i < n; i++) {
            sum[i] += sum[i - 1];
        }
        vector<int> ans;
        for (auto qr : qrs) {
            int li = qr[0], ri = qr[1];
            if (li == 0) {
                ans.push_back(sum[ri]);
            } else {
                ans.push_back(sum[ri] - sum[li - 1]);
            }
        }
        return ans;
    }
};
