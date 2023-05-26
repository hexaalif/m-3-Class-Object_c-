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

Student fun()
{
    char name[100] = "Rahim Ullah";
    Student sl(29, 'C', 7, name);
    return sl;
}

int main()
{
    Student sl = fun();

    cout << sl.name << endl;
    cout << sl.roll << endl;
    cout << sl.cls << endl;
    return 0;
}