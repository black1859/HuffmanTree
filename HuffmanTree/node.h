#pragma once
const int NOT_LEAF = -1234;

class Node
{
public:
	Node(int value, int weight, Node* left, Node* right);
	~Node();

	bool is_leaf();

	int value;
	int weight;
	Node* left;
	Node* right;
private:

};