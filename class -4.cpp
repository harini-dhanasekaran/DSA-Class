#include <bits/stdc++.h>
using namespace std;

//Linked list creation
struct node{
  int data;
  node *next;
  node(int x){
    data = x;
    next = NULL;
  }

};

void printLL(node *head){
  node *itr = head;
  while(itr != NULL){
    cout<<itr -> data<<" ";
    itr = itr -> next;
  }
  cout<<endl;
}

node* reverseLL(node *head){
  node *prev = NULL, *cur = NULL, *nxt = head;
  while(nxt != NULL){
    cur = nxt;
    nxt = nxt -> next;
    cur -> next = prev;
    prev = cur;
  }
  return cur;
}
int main(){
  //create Linked List
  node *head = new node(1);
  node * itr = head;
  for(int i = 2; i <= 5; i++){
    node *temp = new node(i);
    itr -> next = temp;
    itr = itr -> next;
  }
  node *newHead = reverseLL(head);
  printLL(newHead);

  return 0;
}

// 1->2->3->4->5->NULL