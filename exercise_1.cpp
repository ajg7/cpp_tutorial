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
  cout << name << '\n';
  cout << age << '\n';
  cout << height << '\n';

  int num = 221;
  int num2 = 31;
  int num3 = 12;
  cout << num + num2 + num3 << '\n';
  float price = 12.21;
  int quantity = 5;
  cout << price * quantity << '\n';
  char grade = 'A';
  cout << "Your grade is: " << grade << '\n';
  
  part2();
  part3();
  part4();
  
  return 0;
}

void part2() {
  string name;
  int age;
  cout << "Enter your name: " << '\n';
  cin >> name;
  cout << "Enter your age: " << '\n';
  cin >> age;
  cout << "Hello " << name << ", you are " << age << " years old!" << '\n';

  int num1, num2;
  cout << "Enter first number: " << '\n';
  cin >> num1;
  cout << "Enter second number: " << '\n';
  cin >> num2;
  cout << "Sum: " << num1 + num2 << '\n';

  float temperature;
  cout << "Enter temperature: " << '\n';
  cin >> temperature;
  cout << "Temperature is: " << temperature << " C" << '\n';

  int rollNumber;
  string studentName;
  float gpa;
  cout << "Enter roll number: " << '\n';
  cin >> rollNumber;
  cout << "Enter name: " << '\n';
  cin >> studentName;
  cout << "Enter GPA: " << '\n';
  cin >> gpa;
  cout << "Roll Number: " << rollNumber << '\n';
  cout << "Name: " << studentName << '\n';
  cout << "GPA: " << gpa << '\n';

  float length, width;
  cout << "Enter length of rectangle: " << '\n';
  cin >> length;
  cout << "Enter width of rectangle: " << '\n';
  cin >> width;
  cout << "Area: " << length * width << '\n';
  cout << "Perimeter: " << 2 * (length + width) << '\n';
}

void part3() {
  int num;
  int grade;
  int num2;

  cout << "Enter a number: " << '\n';
  cin >> num;

  if (num % 2 == 0) cout << "Number is even" << '\n';
  else cout << "Number is odd" << '\n';

  cout << "Enter your grade: " << '\n';
  cin >> grade;

  if (grade >= 50) cout << "Positive" << '\n';
  else cout << "Try again next time" << '\n';

  cout << "Enter another number: " << '\n';
  cin >> num2;

  if (num2 > 0) cout << "Positive" << '\n';
  else if (num2 < 0) cout << "Negative" << '\n';
  else cout << "Zero" << '\n';
}

void part4() {
  string username;
  string password;
  cout << "Enter a username: " << '\n';
  cin >> username;
  cout << "Enter a password: " << '\n';
  cin >> password;

  if (username == "admin" && password == "1234") cout << "Login successful" << '\n';
  else cout << "Invalid login" << '\n';

  float mark1, mark2, mark3;
  cout << "Enter three marks: " << '\n';
  cin >> mark1 >> mark2 >> mark3;
  float percentage = (mark1 + mark2 + mark3) / 3;
  cout << "Percentage: " << percentage << "%" << '\n';
  
  if (percentage >= 80) cout << "A grade" << '\n';
  else if (percentage >= 60) cout << "B grade" << '\n';
  else if (percentage >= 40) cout << "C grade" << '\n';
  else cout << "Fail" << '\n';

  float num1, num2;
  char op;
  cout << "Enter first number: " << '\n';
  cin >> num1;
  cout << "Enter operator (+, -, *, /): " << '\n';
  cin >> op;
  cout << "Enter second number: " << '\n';
  cin >> num2;
  
  if (op == '+') cout << "Result: " << num1 + num2 << '\n';
  else if (op == '-') cout << "Result: " << num1 - num2 << '\n';
  else if (op == '*') cout << "Result: " << num1 * num2 << '\n';
  else if (op == '/') {
    if (num2 != 0) cout << "Result: " << num1 / num2 << '\n';
    else cout << "Error: Division by zero!" << '\n';
  }
  else cout << "Invalid operator!" << '\n';

  float income;
  cout << "Enter income: " << '\n';
  cin >> income;
  
  if (income > 50000) cout << "High income" << '\n';
  else cout << "Low income" << '\n';

  int hours;
  cout << "Enter hours studied today: " << '\n';
  cin >> hours;
  
  if (hours >= 4) cout << "Great!" << '\n';
  else if (hours >= 2) cout << "Good" << '\n';
  else cout << "Try to study more!" << '\n';
}
