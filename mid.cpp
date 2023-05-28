#include <bits/stdc++.h>

using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    Person(float h, int a, char *n)
    {
        height = h;
        age = a;
        strcpy(name, n);
    }
};

int main()
{
    char name1[100] = "Shad";
    char name2[100] = "Sakib";
    Person *s1 = new Person(5.3, 34, name1);
    Person *s2 = new Person(5.3, 64, name2);

    if (s1->age > s2->age)
    {
        cout << s1->name << " "
             << "is older";
    }
    else
    {
        cout << s2->name << " "
             << "is older";
    }

    // cout << sizeof(name);
    return 0;
}