class Solution {
public:
    bool isValid(string s) {
        stack<char> newstack;
        int length=s.length();
       
        for(int i=0;i<length;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
            newstack.push(s[i]);
            }
            else{
                if(newstack.empty())
                        {
                            return false;
                        }
                else{
                     char top;
                     top=newstack.top();
                    if(top=='(' && s[i]==')' || top=='{' && s[i]=='}' || top=='[' && s[i]==']')
                            {
                                newstack.pop();
                            }
                            else
                            {
                               return false;
                                }
                        }
                    }  
                }
                return newstack.empty();                 
    }
};
