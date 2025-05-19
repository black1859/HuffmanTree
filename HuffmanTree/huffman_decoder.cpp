#include <iostream>
#include "huffman.h"

void HuffmanTree::decode_huffman(std::string binary_stream)
{
    int index = 0;
    Node* current = root;

    while (index < binary_stream.size())
    {
        char c = binary_stream[index++];

        if (c == '0') current = current->left;
        else if (c == '1') current = current->right;
        else continue;

        if (current->value != NOT_LEAF)
        {
            std::cout << char(current->value);
            current = root;
        }
    }
}
