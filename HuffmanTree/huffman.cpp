#include <iostream>
#include "huffman.h"

HuffmanTree::HuffmanTree()
{
	root = nullptr;
}

HuffmanTree::~HuffmanTree()
{
	delete root;
}

Node* HuffmanTree::get_root()
{
	return root;
}

void HuffmanTree::visit_all()
{
	visit(root);
}

void HuffmanTree::visit(Node* cur)
{
	if (!cur) return;
	if (cur->value == NOT_LEAF) {
		visit(cur->left);
		visit(cur->right);
	}
	else
	{
		std::cout << char(cur->value);
	}

}