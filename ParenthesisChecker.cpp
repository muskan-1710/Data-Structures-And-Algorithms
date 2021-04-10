class Solution{
  public:
    // Function to return if the paranthesis are balanced or not
    bool ispar(string x)
    {
    stack<char> s;
    char m;

   
    for (int i = 0; i < x.length(); i++) 
    {
        if (x[i] == '(' || x[i] == '['
            || x[i] == '{') 
        {
          
            s.push(x[i]);
            continue;
        }

    
        if (s.empty())
            return false;

        switch (x[i]) {
        case ')':
            
          
            m = s.top();
            s.pop();
            if (m == '{' || m == '[')
                return false;
            break;

        case '}':

          
            m = s.top();
            s.pop();
            if (m == '(' || m == '[')
                return false;
            break;

        case ']':

           
            m = s.top();
            s.pop();
            if (m == '(' || m == '{')
                return false;
            break;
        }
    }

 
    return (s.empty());
}
    };
