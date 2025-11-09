class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.size();
        int result = 0;

        for (int i = 0; i + k <= n; i++) {
            int val = stoi(s.substr(i, k));  // get k-length substring
            if (val != 0 && num % val == 0)
                result++;
        }

        return result;
    }
};
