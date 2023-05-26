#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student s;
    // s.name='rahat'; vul declaration
    char nm[100] = "Rahim";
    strcpy(s.name, nm);
    s.roll = 19;
    s.section = 'a';
    s.cls = 11;

    Student a;
    a.roll = 55;
    a.cls = 9;
    a.section = 'b';
    char nm2[100] = "Sinthia";
    strcpy(a.name, nm2);

    cout << s.name;

    return 0;
}