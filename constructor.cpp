#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, int s, int c, char *n)
    {
        roll = r;
        section = s;
        cls = c;
        strcpy(name, n);
    }
};

int main()
{
    Student s(29, 'A', 9, "Sin akter");
    Student p(29, 'A', 9, "murgi");

    cout << s.name << endl;
    cout << p.name;

    return 0;
}