#include<bits/stdc++.h>
 using namespace std;

	class Node{
	public:
		int value;
		Node* next;

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

 void insert_a_newnode(Node* head, int value){
	 Node *temp = head;
	 Node *newnode = new Node(value);

	 if (temp == NULL){
		 head = newnode;
		 return;
	 }
	 while(temp != NULL){
		if (temp->next == NULL){
			temp->next = newnode;
			break;
		}
	 }
 }

 int main(){

	 Node *head = NULL;

	 while(true){
		 int x;
		 cin >> x;
		 if( x == -1){
			break;
		 }
		 insert_a_newnode(head, x);
	 }
	 print_linked_list(head);

	 return 0;
 }