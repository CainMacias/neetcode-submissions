class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> n;

        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int n1 = n.top();
                int aux = n1;
                n.pop();
                int n2 = n.top();

                n.push(aux);

                int suma = n1 + n2;

                n.push(suma);
            }else if(operations[i] == "C"){
                n.pop();  
            }else if(operations[i] == "D"){
                int r = n.top() * 2;

                n.push(r);  
            }else{
                n.push(stoi(operations[i]));
            }
        }

        int cont = 0;

        while(!n.empty()){
            cont += n.top();
            n.pop();
        }

        return cont;
    }
};