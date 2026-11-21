// You own a company called "Golden Land Construction" with capital of 5000 million (You can use integer to represent the million number).
// Your son inherited your company, there is no significant change.
// Your grandson also inherited from his father. He is good at business and increased your capital into 30000 million.
// Implement these relationships using multi-level inheritance.
#include <iostream>
using namespace std;
class MyClass
{
public:
    string x = "Golden Land Construction";
    int y = 5000;
    void myFunction()
    {
        cout << x + " " << y << endl;
    }
};

class MySon : public MyClass
{
};

class MyGrandSon : public MySon
{
public:
    int z = 30000;
    void myFunction()
    {
        cout << x + " " << z << endl;
    }
};
int main()
{
    MyClass myObj;
    MySon sonObj;
    MyGrandSon grandSonObj;
    myObj.myFunction();
    sonObj.myFunction();
    grandSonObj.myFunction();
    return 0;
}