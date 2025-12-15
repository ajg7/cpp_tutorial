#include <iostream>
using namespace std;

void q1();
void q2();
void q3();
void q4();
void q5();
void q6();
void q7();
void q8();
void q9();
void q10();
void q11();

int main() {
  q1();
  q2();
  q3();
  q4();
  q5();
  q6();
  q7();
  q8();
  q9();
  q10();
  q11();
  return 0;
}

// Q1
void q1() {
  int numbers[5];
  
  cout << "Enter 5 integers:" << endl;
  for(int i = 0; i < 5; i++) {
    cout << "Enter number " << (i + 1) << ": ";
    cin >> numbers[i];
  }
  
  cout << "\nYou entered: ";
  for(int i = 0; i < 5; i++) {
    cout << numbers[i] << " ";
  }
  cout << endl;
}

// Q2
void q2() {
  int numbers[10];

  cout << "Enter 10 integers: " << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Enter number " << (i + 1) << ": ";
    cin >> numbers[i];
  }

  cout << "\nEven numbers: ";
  for (int i = 0; i < 10; i++) {
    if (numbers[i] % 2 == 0) {
      cout << numbers[i] << " ";
    }
  }
  cout << endl;
}

// Q3
void q3() {
  int marks[5];
  
  cout << "Enter marks of 5 students:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Enter marks for student " << (i + 1) << ": ";
    cin >> marks[i];
  }
  
  int highest = marks[0];
  for (int i = 1; i < 5; i++) {
    if (marks[i] > highest) {
      highest = marks[i];
    }
  }
  
  cout << "\nHighest mark: " << highest << endl;
}

// Q4
void q4() {
  int numbers[5];
  
  cout << "Enter 5 integers:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Enter number " << (i + 1) << ": ";
    cin >> numbers[i];
  }
  
  cout << "\nReverse order: ";
  for (int i = 4; i >= 0; i--) {
    cout << numbers[i] << " ";
  }
  cout << endl;
}

// Q5
void q5() {
  int numbers[7];
  
  cout << "Enter 7 integers:" << endl;
  for (int i = 0; i < 7; i++) {
    cout << "Enter number " << (i + 1) << ": ";
    cin >> numbers[i];
  }
  
  int sum = 0;
  for (int i = 0; i < 7; i++) {
    sum += numbers[i];
  }
  
  cout << "\nSum of all elements: " << sum << endl;
}

/* Basic Pointers */
// Q6
void q6() {
  int num = 10;
  int *ptr = &num;
  
  cout << "Value of the variable: " << num << endl;
  cout << "Address of the variable: " << &num << endl;
  cout << "Value using pointer (*ptr): " << *ptr << endl;
}

// Q7
void q7() {
  int num = 20;
  int *ptr = &num;
  
  cout << "Initial value: " << num << endl;
  
  *ptr = 50;
  
  cout << "Updated value: " << num << endl;
}

/* Memory Allocation (Static vs Dynamic) */
// Q8
void q8() {
  int *ptr = new int;
  
  cout << "Enter an integer: ";
  cin >> *ptr;
  
  cout << "You entered: " << *ptr << endl;
  
  delete ptr;
  cout << "Memory deleted successfully." << endl;
}

// Q9
void q9() {
  int *arr = new int[5];
  
  cout << "Enter 5 integers:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Enter number " << (i + 1) << ": ";
    cin >> arr[i];
  }
  
  cout << "\nYou entered: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  
  delete[] arr;
  cout << "Memory freed successfully." << endl;
}

// Q10
void q10() {
  cout << "=== Static Memory Allocation ===" << endl;
  // Static: Memory allocated at compile time, size fixed
  int staticArr[5] = {1, 2, 3, 4, 5};
  cout << "Static array (fixed size 5): ";
  for (int i = 0; i < 5; i++) {
    cout << staticArr[i] << " ";
  }
  cout << endl;
  cout << "Memory is automatically managed (on stack)" << endl;
  
  cout << "\n=== Dynamic Memory Allocation ===" << endl;
  // Dynamic: Memory allocated at runtime using new
  int size;
  cout << "Enter array size: ";
  cin >> size;
  
  int *dynamicArr = new int[size];
  cout << "Enter " << size << " integers:" << endl;
  for (int i = 0; i < size; i++) {
    cin >> dynamicArr[i];
  }
  
  cout << "Dynamic array (size " << size << "): ";
  for (int i = 0; i < size; i++) {
    cout << dynamicArr[i] << " ";
  }
  cout << endl;
  cout << "Memory must be manually freed (on heap)" << endl;
  
  delete[] dynamicArr;
}

// Q11
void q11() {
  int n;
  cout << "Enter the number of integers (N): ";
  cin >> n;
  
  int *arr = new int[n];
  
  cout << "Enter " << n << " integers:" << endl;
  for (int i = 0; i < n; i++) {
    cout << "Enter number " << (i + 1) << ": ";
    cin >> arr[i];
  }
  
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  
  cout << "\nSum of all integers: " << sum << endl;
  
  delete[] arr;
}

/*
Q1: What does a pointer store?
Answer: B. A memory address

Q2: If we have:
int x = 5;
int *ptr = &x;
What does ptr contain?
Answer: B. The address of x

Q3: What does *ptr give?
Answer: B. Value stored in x

Q4: Which operator is used to get the address of a variable?
Answer: B. &

Q5: What will this print?
int x = 10;
int *p = &x;
cout << *p;
Answer: A. 10

Q6: Which is the correct way to declare a pointer to an int?
Answer: B. int *p;

Q7: If int arr[5], then arr is equivalent to:
Answer: A. address of arr[0]

Q8: To dynamically allocate an integer in C++, we use:
Answer: C. new int;

Q9: What is the output?
int x = 7;
int *p = &x;
*p = 20;
cout << x;
Answer: B. 20

Q10: What does delete ptr; do?
Answer: B. Frees dynamically allocated memory
*/