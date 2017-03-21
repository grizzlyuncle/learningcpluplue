#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	int myInts[] = {21,1,2,43,45,32,12,543,67};

	std::string inputValue;
	int searchValue;

	std::cout << "What number would you like to search? ";
	std::getline(std::cin, inputValue);

	searchValue = stoi(inputValue);

	std::vector<int> numvector(myInts, myInts+9);

	std::sort(numvector.begin(), numvector.end());

	for(int i = 0; i < 9; i++){
		std::cout << numvector.at(i) << "\n";
	}

	if(std::binary_search(numvector.begin(), numvector.end(), searchValue))
	{
		std::cout << "Found it!! \n";
	}
	else
	{
		std::cout << "Not found it :( \n";
	}

	return 0;
}
