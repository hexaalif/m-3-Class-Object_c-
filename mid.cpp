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
    char name[100] = "Shad";
    Person *s = new Person(5.3, 34, name);
    cout << s->name << endl;

    return 0;
}