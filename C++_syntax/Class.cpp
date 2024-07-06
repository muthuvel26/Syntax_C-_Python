/*
#include<iostream>
using namespace std;

// Class decleration
class Calc {
public: 
        int one;
        int two;
        int three;
};


int main()
{
Calc operation;
operation.one =1;
operation.two = 2;
operation.three = 3;

cout << "Number  one" << operation.one << endl;
cout << "Number  Two" << operation.two << endl;
cout << "Number  Three" << operation.three << endl;
}
//it will increase the line of code for each evry numbers.
*/

#include <iostream>
using namespace std;
class number{
private:
    int value;
public:
    number(int v):value(v){ 
    /*"member initializer list" help to avoid assignment in constructor body "value = v"*/
    }
};

int main(){
    number variable(2);
}
