class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> STACK;
        for(int i=0;i<num.length();i++){  //verify that the current digit is smaller than the top of the stack, and k > 0, pop the stack (i.e., remove the bigger digit).
            while(k > 0 && !STACK.empty() && num[i] < STACK.top()){
                STACK.pop();
                k--;
            }
            STACK.push(num[i]);
        }
        
        while(k > 0){//If still k is remaining, then remove characters from end because they are the bigger one!
            STACK.pop();
            k--;
        }

        string result;
        while (!STACK.empty()) {
            result += STACK.top();  // Append at the end
            STACK.pop();
        }
        reverse(result.begin(), result.end());  // One-time reverse

            
        if(result.length() > 0 && result[0] == '0'){
            int index = 0;
            while(index < result.length() && result[index] == '0')
                index++;

            result.erase(0, index);
}

        return result.length() > 0 ? result : "0";
    }
};