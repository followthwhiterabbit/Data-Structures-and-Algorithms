// inserting a node at the beginning of a linked list using pointer to pointer with head_reference 
#include <iostream>
using namespace std; 



class Node
{
	public:
		int data;  // holds the value of a node 
		Node* next; // points to the next node in a linked list 
		
}; 


void push_front(Node** head_reference, int data_psh)  
{
	Node* new_node = new Node(); // new node holds the address of the newly created node 
	new_node->data = data_psh; 
	new_node->next = *head_reference; 
	*head_reference = new_node; 
	
}


void push_back(Node** head_reference, int data_psh)
{
	Node* new_node = new Node(); 
	
	Node* last = *head_reference; 
	
	new_node->data = data_psh; 
	
	new_node->next = NULL; 
	
	
	
	
	
	if (*head_reference == NULL)
		{
			*head_reference = new_node; 
			return; 
		}
	
	
	while(last->next != NULL)
		last = last->next; 
		
		
		
		
	last->next = new_node; 
	
	return ; 
		
	
	
	
}





void print_list(Node* node)   // prints the linked list 
{
	while(node != NULL)
		{
			cout << node->data << "-> "; 
			node = node->next; 
		}
	cout << "NULL"; 
	
}







int main()
{
 

Node* head = NULL; 

push_front(&head, 5); 
push_front(&head, 24);



print_list(head); 




	
}
