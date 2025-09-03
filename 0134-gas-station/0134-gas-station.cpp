class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;   // total net gas
        int tank = 0;    // current tank
        int start = 0;   // candidate starting index
        
        for (int i = 0; i < gas.size(); i++) {
            int diff = gas[i] - cost[i];
            total += diff;
            tank += diff;
            
            if (tank < 0) {
                // can't reach next station from current start
                start = i + 1;
                tank = 0;
            }
        }
        
        return (total >= 0) ? start : -1;
    }
};