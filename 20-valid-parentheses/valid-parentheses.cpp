class Solution {
public:
    bool isValid(string s) {   
        
        int n = s.size();  
        map<char, char> mapped= {
    {')', '('},
    {']', '['},
    {'}', '{'}
};
      
        stack<char> temp;
        for(int i=0; i<n;i++) { 
            if(s[i]=='}' || s[i]==')' || s[i]==']') { 
                if(i==0) { 
                    return false; 
                } 
                if(temp.empty()) { 
            return false;

        } 
                char a = temp.top(); 
                temp.pop();
                if(a!=mapped[s[i]]) { 
                    return false;
                    }
                } 

             


            if(s[i]=='{' || s[i]=='(' || s[i]=='[' ) {   
                temp.push(s[i]); 
            }






        } 

        if(!temp.empty()) { 
            return false;

        } 

        return true;

        
    }
};