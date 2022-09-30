class KthLargest {
public:
     priority_queue<int, vector<int>, greater<int>> temp;
    int kth;
 
    KthLargest(int k, vector<int>& nums) {
       kth = k;
        for(auto i: nums)
        {
             
            temp.push(i);
            if(temp.size()>kth)
              {
                temp.pop();
               }
        }
        
        
//       
      // cout<<temp.top()<<endl;
    
        
    }
    
    int add(int val) {
       
        temp.push(val);
        if(temp.size()>kth)
        {
            temp.pop();
        }
        return temp.top();
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */