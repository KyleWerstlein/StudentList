/*Kyle Werstlein
10/15/19
Student List*/
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Student {
  char fname[24]; // first name
  char lname[24]; // last name
  int  id; // student id
  float gpa;
};

int main() {
  bool isRunning = true; // not global variables
  int entries = 0;
  int idDelete = 0;
  char input[24];
  vector<Student> students;
  vector<Student*> vectorP;
  while(isRunning) {
    cout << "ADD, DELETE, PRINT, or QUIT" << endl;
    cin.getline(input, 7, '\n'); // 7 characters because "DELETE" is the biggest word with 6 letters and a "\n"
    if(strcmp(input, "QUIT") == 0) {
      isRunning = false; // escape loop
    }
    else if(strcmp(input, "ADD") == 0) { // take all the inputs and put them in a new Student object.
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
      entries++; // keep track of how many students there are
      Student * ptr;
      ptr = &students[entries];
      vectorP.push_back(ptr);
    }
    else if(strcmp(input, "DELETE") == 0) { // remove a student from the vector by using their student id
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
    else if(strcmp(input, "PRINT") == 0) { // print out all the data in the students vector
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
