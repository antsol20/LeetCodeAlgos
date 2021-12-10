#include <vector>
#include <iostream>

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int winner(std::vector<int> nums, int s, int e, int turn)
{
	if (s == e)
		return turn * nums[s];
	int a = turn * nums[s] + winner(nums, s + 1, e, -turn);
	int b = turn * nums[e] + winner(nums, s, e - 1, -turn);
	return turn * max(turn * a, turn * b);
}

bool PredictTheWinner(std::vector<int> nums)   // returns False if  P1 can't win
{
	return winner(nums, 0, nums.size() - 1, 1) >= 0;
}

int main()
{

	std::vector<int> vec;
	vec.push_back(1);  
	vec.push_back(5);
	vec.push_back(2);
	//vec.push_back(7);

	// int number_of_items = vec.size();
	// int turn = 1;
	// int p1sum = 0;
	// int p2sum = 0;
	// int tabnums = 0;

	//std::cout << PredictTheWinner(vec, turn, p1sum, p2sum, tabnums);

	std::cout << "result: " << PredictTheWinner(vec) << std::endl;

	return 0;
}