#include <iostream>
using namespace std;

class Addition{
  protected:
    int getResultA(int operand1, int operand2){
      return operand1 + operand2;
    }
};
class Subtraction{
  protected:
    int getResultS(int operand1, int operand2){
      return operand1 - operand2;
    }
};
class Multiplication{
  protected:
    int getResultM(int operand1, int operand2){
      return operand1 * operand2;
    }
};
class Division{
  protected:
    int getResultD(int operand1, int operand2){
      return operand1 / operand2;
    }
};

class GetResult: private Addition,private Subtraction, private Multiplication, private Division{
  private:
    int operand1;
    int operand2;
  public:
    GetResult(int num1,int num2,char oper){
      operand1 = num1;
      operand2 = num2;    
    switch(oper){
      case '+':{
        cout << endl << getResultA(operand1,operand2);
        break;
      }
      case '-':{
        cout << endl << getResultS(operand1,operand2);
        break;
      }
      case '*':{
        cout << endl << getResultM(operand1,operand2);
        break;
      }
      case '/':{
        cout << endl << getResultD(operand1,operand2);
        break;
      }
      default:{
        cout << endl << "Invalid Operator";
        break;
      }
    }
    }
};

int main() {
  char oper;
  int num1,num2;
  cout << endl << "Enter Number 1: ";
  cin >> num1;
  cout << endl << "Enter Number 2: ";
  cin >> num2;
  cout << endl << "Which Operation do You want to Perform"
       << endl << "+" 
       << endl << "-"
       << endl << "*"
       << endl << "/"
       << endl << " -> ";
  cin >> oper;
  GetResult obj(num1,num2,oper);
}