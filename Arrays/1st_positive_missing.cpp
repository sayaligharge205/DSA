class Solution {
  public:
    int missingNumber(vector<int> &arr) {
       unordered_set<int>st;
       
       for(int i=0;i<arr.size();i++){
           if(arr[i] > 0)
           st.insert(arr[i]);
       }
       
       
       for(int i=1;i<=arr.size();i++){
           if(st.find(i) == st.end()){    //st.end()--not found
               return i;
           }
           
           //if(st.count(i)==0){
            //   return i;
        //   }
             
       }
       
       return arr.size()+1;
      
    }
};