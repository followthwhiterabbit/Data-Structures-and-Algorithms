// linked list implementation using linked list class 
#include <iostream>

using namespace std; 



struct node
{
	int data; 
	node* next; 
	
}; 


class linked_list
{
	private:
		node *head, *tail;  // head and tail pointer variables that point to a node type struct 
		
	public:
		linked_list()
			{
				head = NULL;  // NULL here is an rvalue that evaluates to zero 
				tail = NULL;   // we don't have any nodes yet, so they point to null 
				
			}
	
		// member function to add a node 
		void add_node(int data_psh)
			{
				node *temp = new node; 
				temp->data = data_psh; 
				temp->next = NULL; 
				
				if(head == NULL) // when we don't have any nodes yet 
				{
					head = temp; // head will point to this newly created node's address 
					tail = temp; // 
				}
				else
				{
					tail->next = temp; 
					tail = tail->next; 
					
				}
				
				
			}
		
		void printlist()
			{
			while(head != NULL)
				{
					cout << head->data << " "; 
					head = head->next; 
				}
			
				
			}; 
				
		
		
}; 


int main()
{
	linked_list list1; 
	
	list1.add_node(24); 
	list1.add_node(01);
	list1.add_node(1995); 
	
	list1.printlist(); 
	
	
	return 0; 
	
}



