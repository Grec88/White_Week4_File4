//============================================================================
// Name        : Week4_File4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Year {
	string year;

	Year(const string &new_year) {
		year = new_year;
	}
};

struct Month {
	string month;

	Month(const string &new_month) {
		month = new_month;
	}
};

struct Day {
	string day;

	Day(const string &new_day) {
		day = new_day;
	}
};

struct Date {
	string year;
	string month;
	string day;

	Date() {

	}

	Date(const Year &new_year, const Month &new_month, const Day &new_day) {
		year = new_year.year;
		month = new_month.month;
		day = new_day.day;
	}
};

struct Student {
	string name;
	string surname;
	Date date;
};

int main() {
	int quant_of_stud;
	cin >> quant_of_stud;
	vector<Student> students(quant_of_stud);
	for (auto &c : students) {
		cin >> c.name >> c.surname >> c.date.day >> c.date.month >> c.date.year;
	}
	int quant_of_oper;
	cin >> quant_of_oper;
	for (int i = 0; i < quant_of_oper; ++i) {
		int k;
		string operation;
		cin >> operation >> k;
		if (operation == "name" && k > 0 && k <= quant_of_stud) {
			cout << students[k - 1].name << " " << students[k - 1].surname
					<< endl;
		}
		if (operation == "date" && k > 0 && k <= quant_of_stud) {
			cout << students[k - 1].date.day << "."
					<< students[k - 1].date.month << "."
					<< students[k - 1].date.year << endl;
		} else if((operation != "date" && operation != "name") || k <= 0 || k > quant_of_stud) {
			cout << "bad request" << endl;
		}
	}
	return 0;
}
