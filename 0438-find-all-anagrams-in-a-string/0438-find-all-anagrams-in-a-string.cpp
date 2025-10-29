class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), k = p.size();
        vector<int> frequencyOfWindow(26,0);
        vector<int> frequencyOfP(26,0);
        for(int i=0;i<k;i++){
            frequencyOfP[p[i] - 'a']++;
        }
        vector<int> result;
        for(int i=0;i<n;i++) {
            frequencyOfWindow[s[i] - 'a']++;
            if(i>=k)
                frequencyOfWindow[s[i-k] - 'a']--;
            
            if(frequencyOfWindow == frequencyOfP)
                result.push_back(i-k+1);
        }
    return result;
    }
};