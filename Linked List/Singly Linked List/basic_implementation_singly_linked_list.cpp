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

 int main(){

	 Node *head = new Node(1);
	 Node *a = new Node(2);
	 Node *b = new Node(3);
	 Node *c = new Node(4);

	 head->next = a;
	 a->next = b;
	 b->next = c;

	 cout << head->value << " " << head->next->value << " " << head->next->next->value << " " << head->next->next->next->value;
	 return 0;
 }