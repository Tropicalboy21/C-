#include <iostream>
using namespace std;

int marsExploration(string orgMessage)
{
    int length = orgMessage.length();
    int number = orgMessage.length() / 3;

    string call = "SOS";

    string expMessage = "";

    int count = 0;

    for (int i = 0; i < number; i = i + 1)
    {
        expMessage += call;
    }

    for (int j = 0; j < length; j++)
    {
        orgMessage[j] != expMessage[j] ? count += 1 : count;
    }
    return count;
}

int main()
{

    string message = "SOSSPSSQSSOR";

    marsExploration(message);

    return 0;
}
