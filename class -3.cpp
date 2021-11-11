#include<bits/stdc++.h>
using namespace std;
//liner search = H.W 

//binary search
bool binaryS(vector<int> &nums, int target){
  int low = 0, high = nums.size()-1;
  int mid;
  while(low <= high){
    mid = low + (high-low)>>1;
    if(nums[mid] == target)
      return true;
    else if(nums[mid] < target)
      low = mid+1;
    else
      high = mid-1;
  }
  return 0;
}

int main(){
  cout<<"  "<<endl;
  vector<int> nums = {2,3,4,5,6,7,8,9};
  int target = 5;
  if(binaryS(nums, target) == 0)
    cout<<"element not found";
  else
    cout<<"element found";
  cout<<endl<<endl;
  return 0;
}