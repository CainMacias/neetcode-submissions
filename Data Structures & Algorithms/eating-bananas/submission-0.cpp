class Solution {
public:

    bool simularComer(vector<int>& bananas, int target, int velocidad){
        int cont = 0;

        for(int i = 0; i < bananas.size(); i++){
            cont += (bananas[i] +velocidad - 1 ) / velocidad;
        }

        if(cont <= target){
            return true;
        }
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long l = 1;
        long long r = 1000000000;
        long long ans = 0;

        while(l <= r){
            int mitad = l + (r - l) / 2;
            if(simularComer(piles, h, mitad)){
                ans = mitad;
                r = mitad - 1;
            }else{
                l = mitad + 1;
            }

        }
        return ans;
    }
};
