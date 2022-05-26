
// naive solution 

// TIME : o(n^2)..
// space : O(1)....

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       
        int maximum_rectangular_area = 0;
        for(int currblock = 0; currblock<heights.size(); currblock++) {
            int current_block_maximum_area = heights[currblock];
              // block before this particular 
            
              for(int bef_block = currblock-1;bef_block>=0; bef_block--) {
                  if(heights[bef_block] >= heights[currblock]) {
                     current_block_maximum_area += heights[currblock]; 
                  }
                  else{
                      break;
                  }
              }
            
            // block after current block 
            
            
            for(int aft_block = currblock+1; aft_block<heights.size(); aft_block++) {
                  if(heights[aft_block] >= heights[currblock]) {
                     current_block_maximum_area += heights[currblock]; 
                  }
                  else{
                      break;
                  }
              }
            maximum_rectangular_area = max(maximum_rectangular_area,current_block_maximum_area);
            
        }
        
       return maximum_rectangular_area; 
        
    }
};






//OPTAMIZED SOLUTION IN :
// TIME O(N)...
// SPACE : O(N)...



class Solution {
private:
    vector<int> nextSmallerElement(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=n-1; i>=0 ; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(vector<int> arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i=0; i<n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr)
            {
                s.pop();
            }
            //ans is stack ka top
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n= heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
            
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        
        int area = INT_MIN;
        for(int i=0; i<n; i++) {
            int l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
             int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area, newArea);
        }
        return area;
    }
};
