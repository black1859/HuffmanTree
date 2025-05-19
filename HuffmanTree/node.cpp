#include "node.h"

Node::Node(int value, int weight, Node* left, Node* right)
{
	this->value = value;
	this->weight = weight;
	this->left = left;
	this->right = right;
}

Node::~Node()
{
	if (left) delete left;
	if (right) delete right;
}