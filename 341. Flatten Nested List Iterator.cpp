class NestedIterator {
public:
    stack<NestedInteger> st;
    NestedIterator(vector<NestedInteger> &nestedList) {
        int n = nestedList.size();
        for(int i = n-1; i>=0; i--)
            st.push(nestedList[i]);
    }
    
    int next() {
        //I will always insure that the top of the stack is an integer
        int num =  st.top().getInteger();
        st.pop();
        return num;
    }
    
    //This is always called before next()
    bool hasNext() {
        //I will always insure that the top of the stack is an integer
        while(!st.empty()) {
            NestedInteger curr = st.top();
            if(curr.isInteger())
                return true;
            
            st.pop();
            vector<NestedInteger>& vec = curr.getList();
            for(int i = vec.size()-1; i>=0; i--)
                st.push(vec[i]);
        }
        return false;
    }
};
