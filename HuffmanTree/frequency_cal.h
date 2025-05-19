#pragma once
#include "node.h"
#include <string>

Node* generate_array(std::string str);
Node* pop_min(Node* node_array);
Node* find_value_in_array(Node* node_array, int value);