class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int i=0, j=arr.size()-1;
        int temp;
        while(i<j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;   
        }
    }
};