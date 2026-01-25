class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i] > 0){
                st.push(asteroids[i]);
            }
            else{
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
        }
        while(!st.empty()){
            result.insert(result.begin(),st.top());
            st.pop();
        }
          return result;          
        }
};