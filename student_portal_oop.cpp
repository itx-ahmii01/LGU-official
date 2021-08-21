#include<iostream>
#include <windows.h> // WinApi header
using namespace std;

class student_page
{
private:

	string name;              
	int roll_no;
	string department;
	string gmail;
	string password;
	

public:

	student_page();                   //Default Constructor
	student_page(string name, int id, string department, string email, string password); //Parametrised Constructor
	bool search(string abc);                 //Search Function
	//void input();
	void display();                 //Display

	void admission();              //To print information
	void portal();                                //To login 
	void application();                                       //To apply for admission
	void time_table();                                      //To view information
	~student_page();           //Destructor
};

student_page::student_page()
{
	this->department = "Computer Science";
	this->name = "Ali Khan";
	this->roll_no = 1199;
	this->gmail = "alikhan@gmail.com";
	this->password = "12345678";
	
	

}

student_page::student_page(string name, int id, string department, string email, string password)
{
	this->department = department;
	this->name = name;
	this->roll_no = id;
	this->gmail = email;
	this->password = password;
}

bool student_page::search(string abc)
{
	string gmail[6] = { "laiba@gmail.com","qasim@gmail.com","shoaib@gmail.com","saiq@gmail.com","sulaman@gmail.com","alikhan@gmail.com" };
	for (int i = 0; i < 6; i++)
	{
		if (gmail[i] == abc)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
}


void student_page::display()
{
	
	cout << "_________________________________Student Page__________________________________________________";
	cout << endl;
	int a;
	cout << "Press 1 to see Admission Information" << endl;
	cout << "Press 2 to Log In" << endl;
	cout << "Press 3 to Apply for the admission" << endl;
	cout << "Press 4 to see the Time table" << endl;
	cout << "Press 5 to Exit" << endl;
	cin >> a;
	if (a == 1)
	{
		admission();
	}
	if (a == 2)
	{
		portal();
	}
	if (a == 3)
	{
		application();
	}
	if (a == 4)
	{
		time_table();
	}
	if (a == 5)
	{
		cout << "Thanks for Using LGU portal !" << endl;
	}
	cout << "Want to use portal Agin(Y/N)" << endl;
	char b;
	cin >> b;
	if (b == 'y' || b == 'Y')
	{
		system("cls");
		display();
	}
	else
	{
		cout << "Thanks for Using LGU portal !" << endl;
	}
}

void student_page::admission()
{
	system("cls");
	cout <<  "Welcome to University of QSSL Portal" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "We offer Admission in Following Departments:" << endl;
	cout << "Computer Science" << endl;
	cout << "Electrical Department" << endl;
	cout << "Management " << endl;
	cout << "Civil Engineering " << endl;
	cout << endl;
	cout << "To apply create your account" << endl;
	cout << "      Deadline :  29th May, 2021     " << endl;


}

void student_page::portal()
{
	system("cls");
	cout << "Welcome to University of QSSL Portal" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	string em;
	cout << "Please Enter your Email:  " ;
	cin >> em;
	cout << endl;
	string ps;
	cout << "Please Enter your Password:  ";
	cin >> ps;
	if (em == this->gmail && ps == this->password)
	{
		cout << "Login Successfully !";
			cout << endl;
			cout << "Student Name is : " << this->name << endl;
			cout << "Student Roll No is : " << this->roll_no << endl;
			cout << "Student Department  is : " << this->department << endl;
			cout << "Student Samester is :  4" << endl;
	}
	else
	{
		cout << "Invalid Username or Password" << endl;
		cout << "To add record please add his details" << endl;
		char a;
		cout << " To create Account press C: ";
		cin >> a;
		if (a == 'c' || a == 'C')
		{
			application();
		}
	}


}

void student_page::application()
{
	system("cls");
	cout << "Welcome to University of QSSL Portal" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	admission();
	char a;
	cout << " To create Account press C: ";
	cin >> a;
	if (a == 'c' || a == 'C')
	{
		cout << endl;
		cout << "Please Enter email address:";
		string em;
		cin >> em;
		this->gmail = em;
		cout << endl;
		cout << "Please Enter Your Password:";
		string ps;
		cin >> ps;
		cout << endl;
		this->password = ps;
		cout << "Your Account Created Successfully!" << endl;
		system("cls");
		cout << "Welcome to University of QSSL Portal" << endl;
		cout << endl;
		cout << endl;
		cout << "Enter Your Complete Name" << endl;
		cin >> this->name;
		cout << "Enter Your Department Name" << endl;
		cin >> this->department;
		cout << endl;
		cout << "Successfully Applied To Your Department" << endl;

	}
	else
	{
		cout << "Thanks for Using LGU portal !" << endl;
	}
}

void student_page::time_table()
{
	
	system("cls");
	cout << "Welcome to University of QSSL Portal" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	string em;
	cout << "Please Enter your Email:  ";
	cin >> em;
	cout << endl;
	string ps;
	cout << "Please Enter your Password:  ";
	cin >> ps;
	string departments[4] = { "ComputerScience","ElectricalDepartment","CivilEngineering", "Managementsciences" };
	string teacher[4] = { "Mr.MunirAhmad","Mr.SherazAhmad","Mr.MunirButt","Mr.ChangezKhan" };
	string courses[4] = { "AppliedPhysics","Algebra", "OOP","Islamiyat"};
	string timings[4] = { "2:00pm-3:00Pm","3:00pm-4:00Pm","1:00pm-2:00Pm","12:00pm-1:00Pm" };
	if (search(em)==true && ps == this->password)
	{
		char res;
		cout << "Press D to see time table Department Vise" << endl;
		cout << "Press T to see time table Teacher Vise" << endl;
		cout << "Press C to see time Table Course Vise" << endl;
		cin >> res;
		if (res == 'D')
		{
			cout << " Department Vise Time Table is:" << endl;
			for (int i = 0; i < 4; i++)
			{
				cout << departments[i] << "  Timings are: " << timings[i] << endl;
			}
		}
		if (res == 'T')
		{
			cout << " Teacher Vise Time Table is:" << endl;
			for (int i = 0; i < 4; i++)
			{
				cout << teacher[i] << "  Timings are: " << timings[i] << endl;
			}
		}
		if (res == 'C')
		{
			cout << " Subject Vise Vise Time Table is:" << endl;
			for (int i = 0; i < 4; i++)
			{
				cout << courses[i] << "  Timings are: " << timings[i] << endl;
			}
		}
		
	}
	else
	{
		cout << "You cannot Access time tables" << endl;
	}
}

student_page::~student_page()
{
	cout << "!Destructor been created!" << endl;
}

int main()
{
	HANDLE hConsole;
	int k=3;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	// pick the colorattribute k you want
	SetConsoleTextAttribute(hConsole, k);
	student_page s;
	
	
	s.display();
	return 0;
}