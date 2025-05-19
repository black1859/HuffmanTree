#include "frequency_cal.h"

NodeArray::NodeArray()
{
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		this->nodes[i] = nullptr;
	}
}

NodeArray::~NodeArray()
{
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		if (nodes[i]) delete this->nodes[i];
		nodes[i] = nullptr;
	}
}

void NodeArray::generate_array(std::string str)
{
	int str_index = 0;
	char c = str[str_index];
	int arr_index = 0;
	while (c)
	{
		Node* current = find_node_by_value(c);
		if (current) current->weight++;
		else nodes[arr_index++] = new Node(c, 1, nullptr, nullptr);
		c = str[++str_index];
	}
}

void NodeArray::insert_node(Node* node)
{
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		if (!nodes[i]){
			nodes[i] = node;
			return;
		}
	}
}

Node* NodeArray::find_node_by_value(int value)
{
	Node* result = nullptr;
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		if (nodes[i] && nodes[i]->value == value) {
			result = nodes[i];
			return result;
		}
	}
	return result;
}

Node* NodeArray::pop_min()
{
	Node* result = nullptr;
	int index = -1;

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		if (nodes[i]) {
			result = nodes[i];
			index = i;
			break;
		}
	}
	if (!result) return nullptr;

	for (int i = index + 1; i < ARRAY_LENGTH; i++) {
		if (nodes[i] && nodes[i]->weight < result->weight) {
			result = nodes[i];
			index = i;
		}
	}
	nodes[index] = nullptr;
	return result;
}

int NodeArray::get_size()
{
	int s =0;
	for (int i = 0; i < ARRAY_LENGTH; i++) {
		if (nodes[i]) s++;
	}
	return s;
}
