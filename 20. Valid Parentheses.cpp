class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];

            //opening
            if(ch == '(' || ch=='{' || ch == '['){
                st.push(ch);
            }
            else{
                //closing 
                if(!st.empty()){
                 char topch=st.top();
                  if(ch == ')' && topch == '('){
                      st.pop();
                  
                  }
                    else if(ch == '}' &&  topch== '{'){
                      st.pop();
                  }

                   else   if(ch == ']' && topch == '['){
                      st.pop();
                  }
                   else{
                      //bro no matching
                      return false;
                  }


                }
                else{
                    return false;
                }

               





            }
             






        }
        if(st.empty()){
            return true;

        }
        else{
            return false;
        }


    }
};



class Solution {
public:
    bool isValid(string s) {
        std::stack< char > st;
        for(const auto& el: s)
        {
            if(el == '{' || el == '[' || el == '(')
                st.push(el);
            else if(st.empty())
                return false;
            else
            {
                const auto& last_element = st.top();
                if(el == '}' && last_element != '{')
                    return false;
                if(el == ')' && last_element != '(')
                    return false;
                if(el == ']' && last_element != '[')
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
//another
class Solution {
public:
    bool isValid(string s) {
        stack<char> st ; 
        for (int i = 0 ;  i< s.length() ; i++)
        {
            char ch = s[i];


            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch) ; 
            }

            else {

                if (!st.empty())
                {
                    char top = st.top() ;
                    if ((ch == ')' && top == '(') || 
                        (ch == '}' && top == '{') ||
                        (ch == ']' && top == '[')) 
                        {
            
                            st.pop() ;
                        }
                        else 
                        {
                            return false ; 
                        }
                }
                else 
                {

                    return false ;
                }
            }
        }

 
        if (st.empty())
        {
            return true ; 
        }
        return false ;
    }
};
