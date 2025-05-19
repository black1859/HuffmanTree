#pragma once
#include <string>
#include "node.h"

class HuffmanTree
{
public:
	HuffmanTree();
	~HuffmanTree();

	void generate_huffman(std::string str);
private:
	Node* root;
};