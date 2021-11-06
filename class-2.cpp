#include <bits/stdc++.h>
using namespace std;

//loop
// int main(){
//   int i = 1;
//   while(true){
//     if(i == 3)
//      break;
//     cout<<i<<" ";
//     i++;
//   }
//   return 0;
// }

//dynamic memory
//pointers and reference
// int main(){

//   return 0;
// }



//structure
// struct student{
//   int rolNo;
//   string name;
//   void create(int r, string n){
//     rolNo = r;
//     name = n;
//   }
// };

// int main(){
//    student s1;
//    s1.create(908, "Haruk");
//    cout<<s1.rolNo;
//   return 0;
// }
//syntax 
//accessing


//class, object
// class student{
// public:
//   int rolNo;
//   string name;
//   int *p = new int[5];
//   student(int rolNo, string name){
//     this->rolNo = rolNo;
//     this->name = name;
//   }
//   ~student(){
//     delete [] p; 
//   }
// };
// int main(){
//   //stack .
//   student s2 = student(8763,"Unknown");
//   cout<<s2.name <<" ";

//   //heap ->
//   student *s1 = new student(9834, "Haruk");
//   cout<<s1->name;
//   delete s1;
//   return 0;

// }
//syntax 
//keywords (new, delete, this)
//constructor


//pair, vector, set
int main(){
  vector<int> num1; // vector<int> vec_name(vec_size, vec_val);
  for(int i = 0; i < 5; i++){
    num1.push_back(i);
  }
  //0 1 2 3 4
  num1.pop_back();
  // //0 1 2 3
  // num1.clear();
  // //
  num1.erase(num1.begin()+1,num1.begin()+3);
  //0 4
  
  auto itr = num1.begin()+2;
  num1.erase(itr);
  //0 1 3 4
  
}

//iterators
//push_back, pop_back, clear, erase, find, emplace_back, empty

//count, lower_bound, upper_bound, insert