#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    // Student(string name, int roll, int marks){
    //     this->name = name;
    //     this->roll = roll;
    //     this->marks = marks;
    // }
};

bool cmp(Student l, Student r)
{
    // return l.marks > r.marks ? l.marks > r.marks : l.roll < r.roll;
    if (l.marks != r.marks)
        return l.marks > r.marks;
    else
        return l.roll < r.roll;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}