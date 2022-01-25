#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int l, int m, int r){
  int left = l, right = m, itr = l;
  int temp[r+1];
  while(left < m && right <= r){
    if(nums[left] < nums[right])
      temp[itr++] = nums[left++];
    else
      temp[itr++] = nums[right++];
  }
  while(left < m)
    temp[itr++] = nums[left++];
  while(right <= r)
    temp[itr++] = nums[right++];
  for(int i = l; i <= r; i++)
    nums[i] = temp[i];
}

void mergeSort(vector<int> &nums, int l, int r){
  if(l < r){
    int mid = l + ((r-l)>>1);
    mergeSort(nums, l, mid);
    mergeSort(nums, mid+1, r);

    merge(nums, l, mid+1, r);
  }
}

int main(){
  vector<int> nums = {0,2,3,1,-4};
  mergeSort(nums,0,nums.size()-1);
  for(auto &num:nums)
    cout<<num<<" ";
  return 0;
}