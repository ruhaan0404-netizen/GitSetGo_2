class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> ind;
        ind.push(-1);
        int mx_len=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') ind.push(i);
            else{
                if(ind.size()==1){
                    ind.pop();
                    ind.push(i);
                }else{
                    ind.pop();
                    mx_len=max(mx_len,i-ind.top());
                }
            }
        }
        return mx_len;
    }
};
