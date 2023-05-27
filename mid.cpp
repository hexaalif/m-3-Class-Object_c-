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
    Person *s = new Person(5.3, 34, "rahim");
    cout << s->age << endl;

    return 0;
}