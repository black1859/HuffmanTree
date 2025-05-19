#include "huffman.h"
#include "frequency_cal.h"
#include <iostream>

void HuffmanTree::generate_huffman(std::string str)
{
	NodeArray node_array = NodeArray();
	node_array.generate_array(str);
	
	while (node_array.get_size() != 1)
	{
		Node* right = node_array.pop_min();
		Node* left = node_array.pop_min();
		node_array.insert_node(new Node(NOT_LEAF, right->weight + left->weight, left, right));
	}
	root = node_array.pop_min();
}

void HuffmanTree::generate_codes(Node* cur, std::string path)
{
	{
		if (!cur) return;

		if (cur->value != NOT_LEAF) {
			std::cout << char(cur->value) << ": " << path << std::endl;
			return;
		}

		generate_codes(cur->left, path + "0");
		generate_codes(cur->right, path + "1");
	}
}
