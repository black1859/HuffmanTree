#pragma once
#include <string>
#include "node.h"

const int NOT_LEAF = -1234;

class HuffmanTree
{
public:
	HuffmanTree();
	~HuffmanTree();

	Node* get_root();

	void generate_huffman(std::string str);
	void generate_codes(Node* cur, std::string path);

	void decode_huffman(std::string binary_stream);

	void visit_all();
private:
	Node* root;
	std::string bstr;

	void visit(Node* cur);

};