#include <iostream>
using namespace std;

int main() {
  string name;
  string answer;
  cout << "Hey, what is your name? \n"; // Type a number and press enter
  cin >> name; // Get user input from the keyboard
  cout << "so your name is " << name <<"? \n";
  cin >> answer;
  
  if (answer == "yes")
  	cout << "great!";
  
}
