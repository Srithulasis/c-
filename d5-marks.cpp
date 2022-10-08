#include <iostream>
#include <cmath>

using namespace std;

class Marks {
public:
	int rollNumber;
	char *name;
	int *marks; // array of marks

	int num_marks; // number of the marks

	void GenerateMarks(int num) { // fills the array with marks
		num_marks = num;
		marks = new int[num];

		for (int i = 0; i < num; i++)
			marks[i] = rand() % 5 + 1;
	}

	int sum_of_marks() {
		int sum = 0;

		for (int i = 0; i < num_marks; i++)
			sum += marks[i];

		return sum;
	}

	double avarage() {
		return round(((double)sum_of_marks() / num_marks) * 100) / 100;
	}

	void set_marks(int number_of_marks, int newmarks) { // change mark with number number_of_marks
		marks[number_of_marks] = newmarks;
	}

	int get_marks(int number_of_marks) {
		return marks[number_of_marks];
	}

	void set_num_marks(int num) {
		num_marks = num;
		
		delete[]marks;

		marks = new int[num];
	}

	~Marks() {
		delete[]marks;
	}

};


class Physics : public Marks {
public:
	
};


class Chemistry : public Marks {
public:


};


class Mathematics : public Marks {
public:


};

int main()
{
	int num;

	cout << "Enter the number of students ";
	cin >> num;

	Physics *cl1_phys = new Physics[num]; // array of student with marks in physics
	Chemistry *cl1_chem = new Chemistry[num]; // array of student with marks in chemistry
	Mathematics *cl1_math = new Mathematics[num]; // array of student with marks in mathematics

	for (int i = 0; i < num; i++) { // Generate marks and roll numbers

		cl1_phys[i].rollNumber = cl1_chem[i].rollNumber = cl1_math[i].rollNumber = i + 1;

		cl1_phys[i].GenerateMarks(9);
		cl1_chem[i].GenerateMarks(5);
		cl1_math[i].GenerateMarks(2);
	}
	oupt:
enter the student name:sree
enter the student reg no:192111004
enter the chemistry marks:77
enter the physics marks:89
enter the mathemetics marks:54
total mark:220
average:65%


