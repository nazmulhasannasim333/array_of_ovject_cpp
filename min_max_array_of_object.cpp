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

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    Student min_obj = a[0];
    min_obj.marks = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min_obj.marks)
        {
            min_obj = a[i];
        }
    }
    cout << min_obj.name << " " << min_obj.roll << " " << min_obj.marks << endl;
    return 0;
}