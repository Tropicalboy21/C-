#include <iostream>
using namespace std;

int marsExploration(string s)
{
    int l = s.length() / 3;

    string expMessage = "";

    for (int i = 0; i < l; i++)
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
