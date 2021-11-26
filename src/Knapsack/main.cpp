#include "Item.h"
#include <vector>
#include <iostream>


int max(int a, int b) {
	return (a > b) ? a : b;
}

int knap_sack(int max_weight, std::vector<Item>& vec, int number_of_items)
{

    if (number_of_items == 0 || max_weight == 0)
        return 0;

    if (vec[number_of_items-1].weight > max_weight)
        return knap_sack(max_weight, vec, number_of_items - 1);

    else
        return max(vec[number_of_items - 1].value + knap_sack(max_weight - vec[number_of_items - 1].weight, vec, number_of_items-1), knap_sack(max_weight, vec, number_of_items - 1));
}

int main()
{
	std::vector<Item> vec;
	vec.push_back(Item(10, 60));
	vec.push_back(Item(20, 100));
	vec.push_back(Item(30, 120));

	int max_weight = 50;
	int number_of_items = 3;

	std::cout << knap_sack(max_weight, vec, number_of_items);

	return 0;
}