#include <iostream>
using namespace std;

int main() {
  int answer = 0;
  int divnum1 = 0;
  int divnum2 = 0;
  int mulnum1 = 0;
  int mulnum2 = 0;
  int subnum1 = 0;
  int subnum2 = 0;
  int addnum1 = 0;
  int addnum2 = 0;

  cout << "\n\n   ********************\n       Calculator   \n   ********************\n      pick an option   \n     1.Division\n     2.Multiplication\n     3.Subtraction \n     4.Addition\n\n   ********************\n\n";
  cout <<"   type your answer here=";
  cin >>answer;

  if (answer == 1){
  	cout << "   ********************\n great give me the first number for your equation:";
    cin >> divnum1;
    cout << "   and the second:";
    cin >> divnum2;
    cout <<"   your answer is ";
    cout <<divnum1/divnum2;
    cout <<"\n********************\n";
    return 0;
  }

  if (answer == 2){
    cout << "   ********************\n great give me the first number for your equation:";
    cin >> mulnum1;
    cout << "   and the second:";
    cin >> mulnum2;
    cout <<"   your answer is ";
    cout <<mulnum1*mulnum2;
    cout <<"\n********************\n";
    return 0;

  }
  if (answer == 3){
    cout << "   ********************\n great give me the first number for your equation:";
    cin >> subnum1;
    cout << "   and the second:";
    cin >> subnum2;
    cout <<"   your answer is ";
    cout <<subnum1 - subnum2;
    cout <<"\n********************\n";
    return 0;
  }
  if (answer == 3){
    cout << "   ********************\n great give me the first number for your equation:";
    cin >> addnum1;
    cout << "   and the second:";
    cin >> addnum2;
    cout <<"   your answer is ";
    cout <<addnum1 + addnum2;
    cout <<"\n********************\n";
    return 0;
  }
           }
              