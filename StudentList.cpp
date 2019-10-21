/*Kyle Werstlein
10/15/19
Student List*/
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Student {
  char fname[24];
  char lname[24];
  int  id;
  float gpa;
};

int main() {
  bool isRunning = true;
  int entries = 0;
  int idDelete = 0;
  char input[24];
  vector<Student> students;
  vector<int>* vectorP;
  while(isRunning) {
    cout << "ADD, DELETE, PRINT, or QUIT" << endl;
    cin.getline(input, 7, '\n');
    if(strcmp(input, "QUIT") == 0) {
      isRunning = false;
    }
    else if(strcmp(input, "ADD") == 0) {
      cout << "ADD" << endl;
      cout << "What is the first name of the student?" << endl;
      cin.get(input, 25);
      cin.get();
      students.push_back(Student());
      for(int i = 0; i < strlen(input); i++) {
	students[entries].fname[i] = input[i];
      }
      cout << "What is the last name of the student?" << endl;
      cin.get(input, 25);
      cin.get();
      for(int i = 0; i < strlen(input); i++) {
	students[entries].lname[i] = input[i];
      }
      cout << "What is the student's ID?" << endl;
      cin >> students[entries].id;
      cout << "What is the student's GPA?" << endl;
      cin >> students[entries].gpa;
      cin.ignore(255, '\n');
      entries++;
    }
    else if(strcmp(input, "DELETE") == 0) {
       cout << "Enter the ID of the student you want to delete." << endl;
       cin >> idDelete;
       for(int i = 0; i < students.size(); i++) {
	 if(students[i].id == idDelete) {
	   students.erase(students.begin() + i);
	   cout << "Entrie removed." << endl;
	 }
       }
       cin.ignore(255, '\n');
    }
    else if(strcmp(input, "PRINT") == 0) {
      for(int i = 0; i < students.size(); i++) {
	cout << endl;
	cout << "First name: " << students[i].fname << endl;
	cout << "Last name: " << students[i].lname << endl;
	cout << "Student ID: " << students[i].id << endl;
	cout.precision(3);
        cout << "GPA: " << students[i].gpa << endl; //emacs indentaion
      }
    }
  }
  return 0;
}
