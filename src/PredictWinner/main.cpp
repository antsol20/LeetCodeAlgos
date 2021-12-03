#include <vector>
#include <iostream>

int max(int a, int b) {
	return (a > b) ? a : b;
}

int calc(std::vector<int>& vec, int turn, int p1sum, int p2sum, int tabnums)
{
	for (size_t i = 0; i < tabnums; i++)
	{
		std::cout << "\t";
	}

	tabnums++;

	std::cout << "turn:" << turn << " p1sum:" << p1sum << " p2sum:" << p2sum  << std::endl;


	if (vec.size() == 0) {
		return 0;
	}

	/*if (vec.size() == 1) {
		return vec[0];
	}*/

	std::vector<int> vec1;
	std::vector<int> vec2;

	for (size_t i = 1; i < vec.size(); i++)
	{
		vec1.push_back(vec[i]);  // no front

	}

	for (size_t i = 0; i < vec.size() - 1; i++)
	{
		vec2.push_back(vec[i]);  // no back

	}

	if (turn == 1) {
		calc(vec1, turn * -1, p1sum + vec[0], p2sum, tabnums);
		calc(vec2, turn * -1, p1sum + vec[vec.size() - 1], p2sum, tabnums);
	}
	else {
		calc(vec1, turn * -1, p1sum, p2sum + vec[0], tabnums);
		calc(vec2, turn * -1, p1sum, p2sum + vec[vec.size() - 1], tabnums);
	}


	//return max(vec[0] + calc(vec1), vec[vec.size() - 1] + calc(vec2))


		// 1, 1, 10, 1, 1
		// 1, 10, 1, 1
		// 1, 1, 10, 1
		// 
		// 1, 1, 10,
		// 
		// 1, 10, 1



}

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(1);
	//vec.push_back(7);

	int number_of_items = vec.size();
	int turn = 1;
	int p1sum = 0;
	int p2sum = 0;
	int tabnums = 0;

	std::cout << calc(vec, turn, p1sum, p2sum, tabnums);

	return 0;
}