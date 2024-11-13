#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/

long long leftSumAns(BinaryTreeNode<int> *root, bool left){
	if(root == NULL){
		return 0;
	}
    long long sum = 0;
	if(left){
		sum+=root->data;
	}
	sum+=leftSumAns(root->left, true);
	sum+=leftSumAns(root->right, false);
	return sum;
}
long long leftSum(BinaryTreeNode<int> *root)
{
	leftSumAns(root, false);
}