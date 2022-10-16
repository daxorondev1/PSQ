#include<bits/stdc++.h>
using namespace std;
//Inorder me BST Sorted hai
class node {
public:
	int data;
	node* left, *right;
	node(int d){
		data = d;
		left = right = NULL;
	}
};

node* insertInBST(node * root, int d)
{
	if(!root)
	{
		root = new node (d);
		return root;
	}

	if(root->data>=d)
	{
		root->left = insertInBST(root->left, d);
	}
	else
	{
		root->right = insertInBST(root->right,d);
	}

	return root;
}

node* createBST()
{
	node* root = NULL;
	int data;
	cin>>data;

	while(data!=-1)
	{
		root = insertInBST(root,data);
		cin>>data;
	}
	return root;
}
void preorder(node* root) {
	if (!root) return;
	cout << root-> data << " ";
	preorder(root->left);
	preorder(root->right);
}


node* searchBST(node* root, int key)
{
	if(!root)
	{
		return NULL;
	}

	if(root->data==key)
	{
		return root;
	}
	else if(root->data >=key)
	{
		return searchBST(root->left,key);
	}
	else
	{
		return searchBST(root->right,key);
	}
}
void printRange(node* root,int k1, int k2)
{
	//baseCase
	if(!root)
		return;

	//recursiveCase
	// if(root->data==k1)
	// {
	// 	cout<<root->data<<" ";
	// 	printRange(root->left,)
	// }
	// else if(r)
	//RecursiveCase
	printRange(root->left,k1,k2);
	if(root->data>=k1 and root->data<=k2)
			cout<<root->data<<" ";
	printRange(root->right,k1,k2);
}
int heightBT(node* root) {
	// base case
	if (!root) return 0;

	// recursive case
	return max(heightBT(root->left), heightBT(root->right)) + 1;
}


bool isBalanced(node* root)
{
	//BaseCase
	if(!root)
		return true;
	// //RecursiveCase
	int l = heightBT(root->left);
	int r = heightBT(root->right);

	bool isv = isBalanced(root->left); 

	bool isv1 = isBalanced(root->right);

	if(abs(l-r)<=1 and isv and isv1)
		return true;
	else
		return false;
	
}
class Pair{
public:
	int height;
	bool isBalanced;
};


Pair fastBalanced(node * root)
{
	Pair p;
	if(!root)
	{
		return {0,true};
	}
	Pair Left;
	Pair Right;
	Left = fastBalanced(root->left);
	Right = fastBalanced(root->right);
	p.height = max(Left.height,Right.height)+1;

	if (abs(Left.height-Right.height)<=1 and Left.isBalanced and Right.isBalanced)
		p.isBalanced = true;
	else
		p.isBalanced = false;
	return p;
}


bool isBST(node * root, int mi = INT_MIN, int mx =INT_MAX)
{
	if(!root)
		return true;


	//Recursive Case
	if(root->data)
}

int main() 
{
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


        node* root = NULL;

        root = createBST();

        // node * ans = searchBST(root,14);
        // if(!(ans==NULL))
        // 	cout<<ans->data<<" Found in BST\n";
        // else
        // 	cout<<"NOT FOUND\n";
		
		// levelOrderTraversal(root);

        // preorder(root);

        // printRange(root,12,16);

        // Pair ans1 = fastBalanced(root);
        // if(ans1.isBalanced)
        // 	cout<<"BalancedBST";
        // else
        // 	cout<<"Not Balanced";





	return 0;
}