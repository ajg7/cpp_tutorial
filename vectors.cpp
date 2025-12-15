using namespace std;
#include<iostream>
#include<vector>
#include<queue>

//Vectors (dynamic array)
int main() {
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.insert(v.begin() + 1, 15);
  v.pop_back();
  v.erase(v.begin() + 1);

  vector<int> v2;
  v.push_back(5);
  v.push_back(6);
  v.push_back(7);
  v.push_back(8);
  v.push_back(9);
  v.push_back(9);
  v.push_back(9);


  v.insert(v.begin() + 3, 67);
  v.erase(v.begin() + 4);
  v.insert(v.begin(), 5);

  cout << v.at(1) << endl;

  v.clear();

  v.shrink_to_fit(); // size & capacity are equal
  v.reserve(50); // Reserves space

  

  return 0;


  
  /**
   * v = [10, 15, 20]
   * size = 2
   * capacity = 4
   * Capacity = How much space is allocated. Array is static while Vectors are dynamic
   * capacity >= size
   * 
   * newCapacity = oldCapacity * 2
   * 
   */
}