#include <iostream>
using namespace std;

int marsExploration(string s)
{
    int l = s.length();

    int numMessages = l / 3;

    string expMessage = "message";

    for (int i = 0; i < numMessages; i++)
    {
        expMessage += s;
    }
    cout << expMessage << endl;
    return 0;
}

int main()
{

    string message = "SOSSOSSOS";

    marsExploration(message);

    return 0;
}
