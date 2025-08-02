class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;
        string result;

        while (i >= 0 || j >= 0 || carry) {
            int digit1 = (i >= 0) ? num1[i] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;

            int total = digit1 + digit2 + carry;
            carry = total / 10;

            result.push_back((total % 10) + '0');

            --i;
            --j;
        }

        reverse(result.begin(), result.end());
        return result;
    }

    bool isValid(string num1, string num2, int start, string& num) {
        string sum = addStrings(num1, num2);
        int len = sum.length();
        if (start + len > num.size() || num.substr(start, len) != sum)
            return false;
        if (start + len == num.size())
            return true;
        return isValid(num2, sum, start + len, num);
    }



    bool isAdditiveNumber(string num) {
        int n=num.length();
        if(n < 3)
            return false;
        for (int i = 1; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                string num1 = num.substr(0, i);
                string num2 = num.substr(i, j - i);
                if ((num1.size() > 1 && num1[0] == '0') || (num2.size() > 1 && num2[0] == '0'))
                    continue;
                if (isValid(num1, num2, j, num)) return true;
            }
        }
        return false;
    }
};