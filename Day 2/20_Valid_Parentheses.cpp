class Solution {
private:
    bool isMatching(char open, char close){
        return  (open == '(' && close == ')') || 
                (open == '{' && close == '}') || 
                (open == '[' && close == ']');
    }
public:
    bool isValid(string s) {
        stack<char> stack;

        for(int i=0;i<s.length();i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                stack.push(s[i]);
            }else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if(stack.empty() || !isMatching(stack.top(),s[i])){
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};