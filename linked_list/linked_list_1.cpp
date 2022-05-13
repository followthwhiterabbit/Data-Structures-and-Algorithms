// linked list examples 
#include <iostream>
using namespace std; 



class Node
{
	public: 
	int data;  // data to be stored in a linked list node 
	Node* next; // points to the next node in the linked list 
	
	
}; 



int main()
{
	Node* head = NULL; // initially head pointer points to null 
	Node* second = NULL; // second node also points to null first 
	Node* third = NULL; 
	Node* fourth = NULL; 
	
	
	// we allocate these nodes in the heap memory 
	head = new Node(); // new Node is created with an address and head holds this address as a value 
	second = new Node(); // second node is created with an address 
	third = new Node(); 
	fourth = new Node(); 
	
	
	// this newly created Node type head pointer will point to the first node in the linked list 
	head->data = 24; // head is the address of the newly created node, so it will hold 1995 as a value 
	head->next= second; // this node's next Node type pointer will point to the second node's address
	
	
	second->data = 01; 
	second->next = third; 
	
	third->data = 1995; 
	third->next = fourth; 
	
	
	fourth->data = 9; 
	fourth->next = NULL; 
	
	
	cout << "my birthday is : " << head->data << " " << second->data << " " << third->data << " " << " at " << fourth->data << " o clock. " << endl; 
	
	
	
	
}
