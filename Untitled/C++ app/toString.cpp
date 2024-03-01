#include <iostream>
#include <String>
using namespace std;

class myClass
{
public:
    myClass(int value) : value(value) {}

    std::string toString() const
    {
        return "MyClass(" + std::to_string(value) + ")";
    }

private:
    int value;
};

int main()
{

    return 0;
}