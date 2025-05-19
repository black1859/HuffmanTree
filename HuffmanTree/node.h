#pragma once

class Node
{
public:
	Node(int value, int weight, Node* left, Node* right);
	~Node();

	int value;
	int weight;
	Node* left;
	Node* right;
private:

};