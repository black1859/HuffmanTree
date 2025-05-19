#include "huffman.h"

HuffmanTree::HuffmanTree()
{
	root = nullptr;
}

HuffmanTree::~HuffmanTree()
{
	delete root;
}