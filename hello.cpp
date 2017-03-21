#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
	
	std::vector <int> lotteryNumberVector(10);

	int numberArray[5] = {32,45,21,43,21};	

	lotteryNumberVector.insert(lotteryNumberVector.begin(), 
								numberArray,
								numberArray+3);

	if(lotteryNumberVector.at(2) == 89)
	{
		cout << "Your number is 21" << lotteryNumberVector.at(2) << endl;
	}else{
		cout << "nopes" << endl;
	}

	cout << lotteryNumberVector.at(2) << endl;

	return 0;
}
