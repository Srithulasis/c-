#include<iostream.h>
char stu{
	int id;
	char name[20];
	public: 
void getstu(){
		cout << "Enter stuid, name";
		cin >> id >> name;
    cin>>marks;
	}
};

class marks: public stu{
	protected: 
	int m, p, c;
	public:
	void getmarks(){
		cout << "Enter 3 subject marks:";
		cin >> m >> p >> c;
	}
};

class sports
	protected:
	int spmarks;
	public:
	void getsports(){
		cout << "Enter sports marks:";
		cin >> spmarks;
	}
};

class result : public marks, public sports
	int tot;
	float avg;
	public :
	void show(){}
		tot=m+p+c;
		avg=tot/3.0;
		cout << "Total=" << tot << endl;
		cout << "Average=" << avg << endl;
		cout << "Average + Sports marks =" << avg+spmarks;
	}
};

void main(){
	result r;
	r.getstu();
	r.getmarks();
	r.getsports();
	r.show();
	getch();
};
output:
enter student name:srithulasi.s
enterstudent id:192111004
enter the maths mark:64
enter the physics mark:78
enter the chemistry mark:96
total mark=233
average=77%
enter student name:srithulasi.s
enterstudent id:192111004
enter sports mark=86
average spports marks=54%

