
//Merge Sort
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int temp[r+1];
         int i =l, j = m, k = l;
         while(i < m && j <= r){
             if(arr[i] < arr[j])
                temp[k++] = arr[i++];
             else
                temp[k++] = arr[j++];
         }
         while(i < m)
            temp[k++] = arr[i++];
         while(j <= r)
            temp[k++] = arr[j++];
         for(int i = l; i <= r; i++)
            arr[i] = temp[i];
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l < r){
            int mid = l + ((r-l)>>1);
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            
            merge(arr, l , mid+1, r);
        }
    }
};

//https://leetcode.com/problems/generate-parentheses/

void findCombinations(int noOfOpenBrackets, int noOfCloseBrackets, int target, string temp, vector<string> &ans){
  if(noOfOpenBrackets == target && noOfCloseBrackets == target){
    ans.push_back(temp);
    return;
  }

  if(noOfOpenBrackets < target)
    findCombinations(noOfOpenBrackets+1, noOfCloseBrackets, target, temp+'(', ans);

  if(noOfCloseBrackets < noOfOpenBrackets)
    findCombinations(noOfOpenBrackets, noOfCloseBrackets+1, target, temp+')', ans);
}

    vector<string> generateParenthesis(int n) {
      vector<string> ans;
      findCombinations(0, 0, n, "", ans);
      return ans;
    }