class Solution{
  
  public:
  
         void swap(vector<long long>&arr, int i, int j){
           
           int temp;
           
           while(i<j){
             
             temp = arr[i];
             arr[i] = arr[j];
             arr[j] = temp;
             
             i++;
             j--;
           
           }
         }
  
  // Function to reverse every sub-array group of size k.
  
  void reverseInGroups(vector<long long>& arr, int n , int k){
    
    int i = 0;
    
    while(i<n-k){
      
      swap(arr, i, i+k-1);
      
      i += k;
      
    }
    
    k = n%k;
    
    swap(arr, i , i+k-1);
    
  }
};
