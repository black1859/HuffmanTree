#pragma once
#include "node.h"
#include <string>

const int ARRAY_LENGTH = 30;

class NodeArray
{
public:
	NodeArray();
	~NodeArray();
	
	void generate_array(std::string str);
	void insert_node(Node* node);
	Node* find_node_by_value(int value);
	Node* pop_min();

	int get_size();
private:
	Node* nodes[ARRAY_LENGTH];
};