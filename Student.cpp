#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;
// Assign studentId and name
void Student::assignDetails(int id,char sname[]) {
studentId=id;
strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  cout<<"Student Id : ";
  cout<<studentId<<endl;

  cout<<"Student Name : ";
  cout<<name<<endl;
}
