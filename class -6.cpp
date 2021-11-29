#include<bits/stdc++.h>
using namespace std;

void dispData(vector<int> &nums){
  for(auto num:nums)
    cout<<num<<" ";
  cout<<endl;
}


void bubbleSort(vector<int> &nums){
  int n = nums.size(), flag = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n-1-i; j++){
      int *curEle = &nums[j], *nextEle = &nums[j+1];
      
      if(*curEle > *nextEle){
        flag = 1;
        swap(*curEle, *nextEle);
      }
    }
    if(flag == 0)
      break;
  }

  dispData(nums);
}

void insertionSort(vector<int> &nums){
  int n = nums.size();
  for(int i = 1; i < n; i++){
    int temp = nums[i], j = i-1;
    while(j >= 0 && nums[j] > temp){
      swap(nums[j+1], nums[j]);
      j--;
    }
    nums[j+1] = temp;
  }

  dispData(nums);
}

void selectionSort(vector<int> &nums){
  int n = nums.size(), j, k;
  for(int i = 0; i < n-1; i++){
    j = k = i;
    while(j < n){
      if(nums[j] < nums[k])
        k = j;
      j++;
    }
    swap(nums[i],nums[k]);
  }
  dispData(nums);
}
int main(){
  cout<<endl;

  vector<int> nums = {3,-5,1,9,6,0,-2};

  //bubble
  //cout<<"Bubble Sort"<<endl;
  //bubbleSort(nums);

  //insertion
  // cout<<"Insertion Sort"<<endl;
  // insertionSort(nums);

  //selection
  cout<<"selection Sort"<<endl;
  selectionSort(nums);

  cout<<endl;
  return 0;
}