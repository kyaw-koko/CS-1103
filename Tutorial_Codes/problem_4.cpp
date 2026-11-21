// Meta has many sub companies including Messenger, and Facebook. Implement these relationships using multiple inheritances.
// Express each respective class attributes using their names in their classes.
// They must also have their own attribute and their own respective function. Eg. Facebook will have display function that shows "Posting Photos and Text"
// and Messenger will have display function that output the text "Talking with friends".

#include <iostream>
using namespace std;
class Messenger
{
public:
    void messengerFunction()
    {
        cout << "Talking with Friends" << endl;
    }
};

class Facebook
{
public:
    void facebookFunction()
    {
        cout << "Posting Photos and Text" << endl;
    }
};

class Meta : public Messenger, public Facebook
{
};
int main()
{
    Meta metaObj;
    metaObj.messengerFunction();
    metaObj.facebookFunction();
    return 0;
}