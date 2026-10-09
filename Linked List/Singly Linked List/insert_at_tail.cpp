// Insert a node in tail
// Insert At Any Position
#include<bits/stdc++.h>
 using namespace std;

 class Node{
	 public:
		 int value;
		 Node *next;

		 Node(int value){
			 this->value = value;
			 this->next = NULL;
		 }
 };

 void print_linked_list(Node* head){
	 Node *temp = head;
	 while(temp != NULL){
		 cout << temp->value << " ";
		 temp = temp->next;
	 }
 }

 void insert_at_any_position(Node* head, int value, int index){
	 Node *newnode = new Node(value);
	 Node *temp = head;
	 for (int i = 0; i < index - 1; i++){
		 temp = temp->next;
	 }
	 newnode->next = temp->next;
	 temp->next = newnode;
 }

 void insert_at_tail(Node* head, int value){
	 Node *newnode = new Node(value);
	 Node *temp = head;
	 while(temp->next != NULL){
		 temp = temp->next;
	 }
	 temp->next = newnode;
 }

 int main(){

	 Node *head = new Node(10);
	 Node *a = new Node(20);
	 Node *b = new Node(30);

	 head->next = a;
	 a->next = b;

	 insert_at_tail(head, 40);
	 print_linked_list(head);
	 insert_at_any_position(head, 50, 3);
	 print_linked_list(head);

	 return 0;
 }