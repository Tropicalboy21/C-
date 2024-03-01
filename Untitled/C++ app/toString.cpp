#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    MyClass(int value)
    {
        value = value;
    }

    std::string toString() const
    {
        return "MyClass(" + std::to_string(value) + ")";
    }

private:
    int value;
};

int main()
{
    MyClass obj(42);
    std::cout << obj.toString() << std::endl;
    return 0;
}