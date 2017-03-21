#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Square{
	int height, width;
	string squareName;
	bool bigEnough;

	public:
		void set_int_values(int, int);
		void set_string_values(string);
		bool set_bool_values(bool);

		int area() {return width*height;}
		string showname() {return squareName;}
		bool isSqaureBigEnough() {return bigEnough;}
};	

void Square::set_int_values(int x, int y){
	width = x;
	height = y;
}

void Square::set_string_values(string name){
	squareName = name;
}

bool Square::set_bool_values(bool size){
	bigEnough = size;

	if(bigEnough <= 70)
	{
		cout << "big enough";

		return true;
	}else
	{
		cout << "Not big enough \n";

		return false;
	}
}

int main(int argc, char *argv[]){
	
	if(argc < 1)
	{
		cout << "No argumens given";

		return 1;
	}else
	{
		cout << argv[1] << "\n";
	}

	Square mySquare;
	
	string inputString;

	cout << "What would you like to call your square? ";
	
	getline(cin, inputString);

	mySquare.set_int_values(10,10);

	int totalArea = mySquare.area();

	mySquare.set_bool_values(totalArea);
	mySquare.set_string_values(inputString);

	cout << "Area of the sqaure: " << mySquare.area() << "\n" << mySquare.showname() << "\n";

	return 0;
}
