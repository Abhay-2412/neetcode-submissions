class MinStack {
public:
    stack<pair<int,int>> st;
    MinStack() 
    {
    }
    
    void push(int val) 
    {
	pair<int,int> ele; 
	ele.first = val;
	ele.second = val;
        if(st.empty())
	{
		st.push(ele);
		return;
	}

	if(st.top().second < ele.second)
	{
		ele.second = st.top().second;
	}
	
	st.push(ele);
	
    }
    
    void pop() 
    {
        st.pop();
    }
    
    int top() 
    {
        return st.top().first;
    }
    
    int getMin() 
    {
        return st.top().second;
    }
};
