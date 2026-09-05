class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> pair_(n);
        for (int i = 0; i < n; i++) {
            pair_[i] = {position[i], speed[i]};
        }
        
        // Ordenar en orden descendente (por posición)
        sort(pair_.rbegin(), pair_.rend());
        
        vector<double> stack;
        for (auto& [p, s] : pair_) {  //                Orden              inverso      (descendente)
            double time = (double)(target - p) / s;
            stack.push_back(time);
            if (stack.size() >= 2 && stack.back() <= stack[stack.size() - 2]) {
                stack.pop_back();
            }
        }
        
        return stack.size();
        
    }
};
