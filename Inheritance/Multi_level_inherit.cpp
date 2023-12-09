#include <iostream>
using namespace std;
class chemistry
{
public:
    int marks1;
    void chemistry_marks()
    {
        cout << "Enter the marks of chemistry" << endl;
        cin >> marks1;
    }
};
class Physics : public chemistry
{
public:
    int marks2;
    void physics_marks()
    {
        cout << "Enter the marks of physics" << endl;
        cin >> marks2;
    }
};
class Biology : public Physics
{
public:
    int marks3;
    void biology_marks()
    {
        cout << "Enter the marks of biology" << endl;
        cin >> marks3;
    }
    int total;
    void total_marks(){
        total = marks1 + marks2 + marks3;
        cout << "Total marks : " << total << endl;
    }
};
int main()
{
    Biology obj;
    obj.chemistry_marks();
    obj.physics_marks();
    obj.biology_marks();
    obj.total_marks();
}