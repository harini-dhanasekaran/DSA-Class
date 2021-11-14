#include <iostream>
using namespace std;

//array implementation
class stack{
  private:
    int top;
    int size;
    int *arr;
  public:
    stack(int size){
      top = -1;
      this->size = size;
      arr = new int[size]; // new data_type[size]; int *arr = new int[size];
    }
    ~stack(){
      delete [] arr;
    }

    // push add new element 
    void push(int data){
      //stack overflow condition
      top++;
      if(top == size){ 
        cout<<"stack overflow"<<endl;
      }
      //add new element
      else{
        arr[top] = data;
      }
    }

    // pop remove the last element
    int pop(){
      //stack underflow
      int removedElements = 0;
      if(top < 0){
        cout<<"stack underflow"<<endl;
        cout<<"current top value :"<<top<<endl;
      }
      //remove the element
      else{
        removedElements = arr[top];
        top--;
      }

      return removedElements;
    }

    //check if stack is empty
    bool empty(){
      //check if top is pointing to a vaild index
      if(top < 0 )
        return true;
      else
        return false;
    }

};

int main(){
  cout<<endl;

  //get size from user
  int size;
  cout<<"enter stack size :";
  cin>>size;

  //create an object
  stack stk(size);
  stk.push(1);
  cout<<stk.pop()<<endl;
  cout<<stk.pop()<<endl;
  cout<<endl;
  return 0;
}

// 
//top = -1