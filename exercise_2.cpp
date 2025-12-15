#include <iostream>
using namespace std;

int main() {
  // datatype arrayname[size] = { ... }
  int marks[5] = { 95, 98, 67, 89, 89 };

  for (int i = 0; i < 5; i++) {
    cout << "Here are the different marks: " << marks[i] << endl;
  }

  // Pointers
  // Variable that store the memory address of another variable
  int age = 20;
  int *p = &age;

  cout << "Value of age: " << age << endl;
  cout << "Address of age: " << &age << endl;
  cout << "Pointer p stores: " << *p << endl;
  cout << "Pointer p stores: " << p << endl;

  int numOfBooks = 80;
  int *b = &numOfBooks;
  cout << "Value of Num of Books: " << numOfBooks << endl;
  cout << "Address of num of books: " << &numOfBooks << endl;
  cout << "Pointer p stores: " << *b << endl;
  cout << "Pointer p stores: " << b << endl;


  int n = 5;
  int* newMarks = new int[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter the mark: " << endl;
    cin >> newMarks[i];
  }

  for (int i = 0; i < n; i++) {
    cout << "Mark: " << newMarks[i] << endl;
  }

  delete[] newMarks;
  
  return 0;
}


