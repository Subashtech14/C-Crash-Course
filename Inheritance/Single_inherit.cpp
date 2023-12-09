#include<iostream>
using namespace std;
class Beverage 
{
    public:
    void drinks()
    {
        cout << "All Drinks are available here" << endl;
    }
};
class coffee : public Beverage
{
    public:
    void mocha()
    {
        cout << "Mocha is available" << endl;
    }
};
int main(){
    coffee c;
    c.drinks();
    c.mocha();
}