class MyQueue
{
stack<int> s1,s2;
public:
void push(int x)
{ 
 s1.push(x);
}
int pop() 
{
 if (s1.empty() && s2.empty())
    {
     return false;
     }
 else if(s2.empty()) 
 {
    while(!s1.empty())
        {
                s2.push(s1.top());
                s1.pop();
          }
     }   
         int topval=s2.top();
         s2.pop();
         return topval;
    }
    
    int peek()
    {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top(); 
    }
    
    bool empty()
    {   return s1.empty() && s2.empty(); }
};
