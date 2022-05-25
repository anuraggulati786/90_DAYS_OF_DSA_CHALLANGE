

void sorted_insert(stack<int> &s, int  num) {
    
    if(s.empty() || (!s.empty() && s.top() < num )) {
        s.push(num);
        return;
    }
    
    int val = s.top();
    s.pop();
    
    // recursive call..
    sorted_insert(s,num);
    
    s.push(val);
    
}
