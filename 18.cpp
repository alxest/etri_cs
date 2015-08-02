#include <iostream>
#include <map>

using namespace std;

// issue : virtual function initialization
// issue :  public inheritance 
// issue : libirary hashtble

class Expression{
  public:
    virtual double Evaluate (map<string,double> *vars) = 0;
};

class Constant : public Expression{
  double value;
  public:
    Constant(double value){
      this->value = value;
    }
    double Evaluate(map<string,double> *vars){
      return value;
    }
};

class VariableReference: public Expression{
  string name;
  public :
    VariableReference(string name){
      this->name = name;
    }
    double Evaluate(map<string,double> *vars){
      double value = (*vars)[name];
      return value;
    }
};

class Operation: public Expression {
  Expression* left; 
  char op; 
  Expression* right;
  public:
    Operation(Expression* left, char op, Expression* right) { 
      this->left = left;
      this->op = op;
      this->right = right;
    }

    double Evaluate(map<string,double> *vars) { 
      double x = left->Evaluate(vars);
      double y = right->Evaluate(vars);
      switch (op) {
        case '+': return x + y; 
        case '-': return x - y; 
        case '*': return x * y; 
        case '/': return x / y;
      }
      throw "Unknown operator"; 
    }
};

int main(){
  Expression *e = new Operation(
      new VariableReference("x"),
        '*',
        new Operation(
          new VariableReference("y"),
          '+',
          new Constant(2)
          )
      );
  map<string,double> *vars = new map<string,double>();
  (*vars)["x"] = 3;
  (*vars)["y"] = 5;
  cout << e->Evaluate(vars) << endl;
  (*vars)["x"] = 1.5;
  (*vars)["y"] = 9;
  cout << e->Evaluate(vars) << endl;
}

