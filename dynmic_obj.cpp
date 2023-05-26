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
    char name[100] = "Rahim Ullah";
    Student *sl = new Student(5, 'a', 11, name);

    // int *a = new int;

    // cout << sl->name << endl;
    // cout << sl->roll << endl;
    // cout << sl->cls << endl;
    cout << (*sl).name << endl;
    return 0;
}