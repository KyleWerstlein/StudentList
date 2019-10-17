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
  char input[24];
  vector<Student> students;
  vector<int>* vectorP;
  while(isRunning) {
    char choice[6];
    cout << "ADD, DELETE, PRINT, or QUIT" << endl;
    // cin.get(choice, 7);
    cin.getline(choice, 6, '\n');
    //cin.ignore(1, '\n');
    if(strcmp(choice, "QUIT") == 0) {
      isRunning = false;
    }
    else if(strcmp(choice, "ADD") == 0) {
      cout << "ADD" << endl;
      cout << "What is the first name of the student?" << endl;
      cin.clear();
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
    else if(strcmp(choice, "DELETE") == 0) {
      cout << "DELETE" << endl;
    }
    else if(strcmp(choice, "PRINT") == 0) {
      cout << "PRINT" << endl;
    }
  }
  return 0;
}
