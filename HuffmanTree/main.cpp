#include <iostream>
#include <string>
#include "huffman.h"


int main(void) {
	HuffmanTree HT = HuffmanTree();

	std::string str = "hello there";
	HT.generate_huffman(str);

	HT.generate_codes(HT.get_root(), "");

	std::string bstr = "001010000001111101010010110001";
	HT.decode_huffman(bstr);
}