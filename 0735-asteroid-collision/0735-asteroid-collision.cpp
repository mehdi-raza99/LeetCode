class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i] > 0){
                st.push(asteroids[i]);
                continue;
            }
            int absoluteValue=abs(asteroids[i]);
            while(!st.empty() && st.top() > 0 && st.top() < absoluteValue)
                st.pop();
            if(!st.empty() && st.top() == absoluteValue){ //Case when equal size asteroiod meet
                st.pop();
                continue;
            }
            if(st.empty() || st.top() < 0)
                st.push(asteroids[i]);
        }
        //   stack<int> st2; //Using another stack to reverse element
        //   while(!st.empty()){
        //     st2.push(st.top());
        //     st.pop();
        //   }
        //   while(!st2.empty()){
        //     result.push_back(st2.top());
        //     st2.pop();
        //   }
        while(!st.empty()){
            result.insert(result.begin(),st.top());
            st.pop();
        }
          return result;          
        }
};