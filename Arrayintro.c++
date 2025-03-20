#include<iostream>
using namespace std;

int main() {
  // const int size = 6;  // Use 'const' to define fixed array size
  // int marks[size];

  // // Taking input 
  // cout << "Enter your input: ";

  // for (int i = 0; i < size; i++) {    
  //   cin >> marks[i];
  // }
  
  // // Printing input 
  // cout << "You entered:\n";
  // for (int i = 0; i < size; i++) {
  //   cout << marks[i] << endl;
  // }

  cout << "Enter n number of Fibonacci numbers you want: ";
  int n;
  cin >> n;

  int a = 0, b = 1;

  cout << "Fibonacci Series: ";
  if (n >= 1) cout << a << " ";
  if (n >= 2) cout << b << " ";
  
  for (int i = 2; i < n; i++) {
      int sum = a + b;
      cout << sum << " ";
      a = b;
      b = sum;
  }

  cout << endl;

  return 0;
}
