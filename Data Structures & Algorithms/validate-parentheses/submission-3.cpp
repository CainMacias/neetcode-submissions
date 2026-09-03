class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(int i = 0; i < s.length(); i++){
            char c = s[i];

            if(c == '(' || c == '{' || c == '['){
                p.push(c);
            }else{
                if(p.empty()){
                    return false;
                }

                char tope = p.top();

                p.pop();

                if(c == ')' && tope != '('){
                    return false;
                }

                if(c == '}' && tope != '{'){
                    return false;
                }

                if(c == ']' && tope != '['){
                    return false;
                }
            }
        }

        return p.empty();
    }
};
