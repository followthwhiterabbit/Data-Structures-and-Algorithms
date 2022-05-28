// binary trees in c and c++ 
#include <iostream>



// with struct to make a user-defined type 
struct node
{
	int data;
	struct node* left; // left is pointer variable that holds the address of another node, it poins to a node type structure
	struct node* right; // right is pointer variable that holds the address of another node to the right of the parent node 

};


// allocating new node 
struct node* newnode(int data) // takes a data to set the node and returns an address 
{
	// first we need to allocate memory for the node 
	struct node* node = (struct node*)malloc(sizeof(struct node)); // this allocates addresses for the node, sizeof(strut node) returns number of bytes as addresses, malloc allocates
	// those addresses, and they're node type which means they're pointing to a node, node holds those addresses and dereferences them with "struct node* node"

	// assigning data to this node 
	node->data = data; // with this statement data member variable of the node is set with the value of the given data by the user 

	// initializing the left and right child of the tree
	node->left = NULL; // here, NULL is an r value which evaluates to be zero, so this 0 value for the left and right node type pointer variable will point to NULL basically 
	node->right = NULL; // the same with the right child as well 

	return(node); // when we alloate a new node, we should return the address of the created node, because node type root pointer variable should point to this newly created node 
				  // also the nodes node type pointer variables hold the addresses of the newly created nodes, so they are initialized with this newly created nodes addresses 

}

// traversing the tree with preorder 
void preorder(struct node* node) // the first call is made from main 
{
	if (node == NULL)  // checks whether the send root node is validy pointing to a newly created node, if it doesn't exist, it returns back to main 
		return;  

	std::cout << node->data; // otherwise, prints the value stored in node  

	preorder(node->left);  // then makes a second call from preorder, namely preorder->left, we move to left child node, if it's valid , we print it, 
							// if it's not we return back to the call made from the last stack call 
	preorder(node->right);  // we call right from there, if it's null we go back to the place where the first call made and move to the right :) easy right haha  


}





int main()
{
	struct node* root = newnode(24);

	root->left = newnode(1);
	root->right = newnode(1995);

	preorder(root); 

}