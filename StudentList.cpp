#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Student {
  char name[12];
  int  id;
  float gpa;
};

int main() {
  bool isRunning = true;
  char choice[6];
  vector<char> input;
  while(isRunning) {
    cout << "ADD, DELETE, PRINT, or QUIT" << endl;
    cin.get(choice, 7);
    cin.get();
    if(choice[0] == 'Q' && choice[1] == 'U' && choice[2] == 'I' && choice[3] == 'T') {
      isRunning = false;
    }
    else if(choice[0] == 'A' && choice[1] == 'D' && choice[2] == 'D') {
      cout << "ADD" << endl;
      cout << "What is the name of the student?" << endl;
    }
    else if(choice[0] == 'D' && choice[1] == 'E' && choice[2] == 'L' && choice[3] == 'E' && choice[4] == 'T' && choice[5] == 'E') {
      cout << "DELETE" << endl;
    }
    else if(choice[0] == 'P' && choice[1] == 'R' && choice[2] == 'I' && choice[3] == 'N' && choice[4] == 'T') {
      cout << "PRINT" << endl;
    }
  }
  return 0;
}
