#include <iostream>
using namespace std;

/* Practice Problems */

void part2();
void part3();
void part4();

// Part 1
int main() {
  string name = "AJ Gebara";
  int age = 32;
  float height = 6.0;
  cout << name << endl;
  cout << age << endl;
  cout << height << endl;

  int num = 221;
  int num2 = 31;
  int num3 = 12;
  cout << num + num2 + num3 << endl;
  float price = 12.21;
  int quantity = 5;
  cout << price * quantity << endl;
  char grade = 'A';
  cout << "Your grade is: " << grade << endl;
  
  part2();
  part3();
  part4();
  
  return 0;
}

void part2() {
  string name;
  int age;
  cout << "Enter your name: " << endl;
  cin >> name;
  cout << "Enter your age: " << endl;
  cin >> age;
  cout << "Hello " << name << ", you are " << age << " years old!" << endl;

  int num1, num2;
  cout << "Enter first number: " << endl;
  cin >> num1;
  cout << "Enter second number: " << endl;
  cin >> num2;
  cout << "Sum: " << num1 + num2 << endl;

  float temperature;
  cout << "Enter temperature: " << endl;
  cin >> temperature;
  cout << "Temperature is: " << temperature << " C" << endl;

  int rollNumber;
  string studentName;
  float gpa;
  cout << "Enter roll number: " << endl;
  cin >> rollNumber;
  cout << "Enter name: " << endl;
  cin >> studentName;
  cout << "Enter GPA: " << endl;
  cin >> gpa;
  cout << "Roll Number: " << rollNumber << endl;
  cout << "Name: " << studentName << endl;
  cout << "GPA: " << gpa << endl;

  float length, width;
  cout << "Enter length of rectangle: " << endl;
  cin >> length;
  cout << "Enter width of rectangle: " << endl;
  cin >> width;
  cout << "Area: " << length * width << endl;
  cout << "Perimeter: " << 2 * (length + width) << endl;
}

void part3() {
  int num;
  int grade;
  int num2;

  cout << "Enter a number: " << endl;
  cin >> num;

  if (num % 2 == 0) cout << "Number is even" << endl;
  else cout << "Number is odd" << endl;

  cout << "Enter your grade: " << endl;
  cin >> grade;

  if (grade >= 50) cout << "Positive" << endl;
  else cout << "Try again next time" << endl;

  cout << "Enter another number: " << endl;
  cin >> num2;

  if (num2 > 0) cout << "Positive" << endl;
  else if (num2 < 0) cout << "Negative" << endl;
  else cout << "Zero" << endl;
}

void part4() {
  string username;
  string password;
  cout << "Enter a username: " << endl;
  cin >> username;
  cout << "Enter a password: " << endl;
  cin >> password;

  if (username == "admin" && password == "1234") cout << "Login successful" << endl;
  else cout << "Invalid login" << endl;

  float mark1, mark2, mark3;
  cout << "Enter three marks: " << endl;
  cin >> mark1 >> mark2 >> mark3;
  float percentage = (mark1 + mark2 + mark3) / 3;
  cout << "Percentage: " << percentage << "%" << endl;
  
  if (percentage >= 80) cout << "A grade" << endl;
  else if (percentage >= 60) cout << "B grade" << endl;
  else if (percentage >= 40) cout << "C grade" << endl;
  else cout << "Fail" << endl;

  float num1, num2;
  char op;
  cout << "Enter first number: " << endl;
  cin >> num1;
  cout << "Enter operator (+, -, *, /): " << endl;
  cin >> op;
  cout << "Enter second number: " << endl;
  cin >> num2;
  
  if (op == '+') cout << "Result: " << num1 + num2 << endl;
  else if (op == '-') cout << "Result: " << num1 - num2 << endl;
  else if (op == '*') cout << "Result: " << num1 * num2 << endl;
  else if (op == '/') {
    if (num2 != 0) cout << "Result: " << num1 / num2 << endl;
    else cout << "Error: Division by zero!" << endl;
  }
  else cout << "Invalid operator!" << endl;

  float income;
  cout << "Enter income: " << endl;
  cin >> income;
  
  if (income > 50000) cout << "High income" << endl;
  else cout << "Low income" << endl;

  int hours;
  cout << "\nEnter hours studied today: " << endl;
  cin >> hours;
  
  if (hours >= 4) cout << "Great!" << endl;
  else if (hours >= 2) cout << "Good" << endl;
  else cout << "Try to study more!" << endl;
}
