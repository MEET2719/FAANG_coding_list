#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	struct Node* left; 
	struct Node* right; 
	Node(int val) 
	{ 
		data = val; 

		// Left and right child for node 
		// will be initialized to null 
		left = NULL; 
		right = NULL; 
	} 
}; 

int main() 
{ 

	root->left = new Node(2); 
	root->right = new Node(3); 


	root->left->left = new Node(4); 
	return 0; 
} 