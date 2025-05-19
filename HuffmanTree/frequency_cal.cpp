#include "frequency_cal.h"

Node* generate_array(std::string str)
{
	int str_index = 0;
	char c = str[str_index];
	Node** node_array = new Node * [100];
	int arr_len = 0;

	//init
	for (int i = 0; i < 100; i++) { node_array[i] = nullptr; }

	while (c)
	{
		Node* current = find_value_in_array(*node_array, c);
		if (current) {
			current->weight++;
		}
		else
		{
			node_array[arr_len++] = new Node(c, 1, nullptr, nullptr);
		}
		c = str[++str_index];
	}

	return *node_array;
}
