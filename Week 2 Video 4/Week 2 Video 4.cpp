#include <iostream>
#include <string>

using namespace std;

int main()
{
    // dataType variableName;
    int age;
    float weight;
    double distance;
    bool isAlive;
    char initial;
    string name;
    string Life;

    unsigned short int betterAge;
    long double hugeDistance;

    age = 27;
    weight = 190.5f;
    distance = 1212.987;
    isAlive = true;
    initial = 'B';
    name = "Ben";

    if (isAlive)
    {
        Life = "Yes";
    }
    else if (!isAlive)
    {
        Life = "No";
    }

    cout << "My name is " << name << " and I am " << age << " years old." << endl;
    cout << "Am I alive: " << Life << endl;

    int newAge;
    newAge = age; //30

    int newestAge = 25;
}

