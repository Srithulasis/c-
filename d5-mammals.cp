#include <iostream>
#include <string>




using namespace std;


class Mammals{
public:
	void printMammal(){
		cout<<"\nI am mammal\n";
	}
};




class Marine{
public:
	void printMarine(){
		cout<<"\nI am a marine animal\n";
	}
};


class BlueWhale:public Marine, public Mammals{
public:
	void printBoth(){
		cout<<"\nI belong to both the categories: Mammals as well as Marine Animals\n";
	}
	 
};


int main(){
	
	//create an object for each of the above class and try calling
	Mammals mammal;
	Marine marine;
	BlueWhale blueWhale;
	//function of Mammals by the object of Mammal
	mammal.printMammal();
	cout<<"\n";
	//function of Blue Whale by the object of Blue Whale
	blueWhale.printBoth();
	cout<<"\n";
	//function of each of its parent by the object of Blue Whale
	blueWhale.printMammal();
	blueWhale.printMarine();
	cout<<"\n";
	//function of Marine Animal by the object of Marine Animal
	marine.printMarine();
	cout<<"\n";


	system("pause");
	return 0;
}
output:
I am a marine animal
belong to both the categories: Mammals as well as Marine Animals

