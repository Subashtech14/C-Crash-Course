#include<iostream>
using namespace std;
class party{
public:
    int meals;
    void food(){
        cout <<"Enter the number of meals" << endl;
        cin >> meals;
    }
};
class Drinks
{
    public:
    int drink;
    void Liquor(){
        cout <<"Enter the number of drinks" << endl;
        cin >> drink;
    }
};
class Bill : public party, public Drinks{
    public:
    int bill;
    void total(){
        bill = meals * 60 + drink *10;
        cout << "Total bill : " << bill << endl;
    }
};

int main()
{
    Bill b;
    b.food();
    b.Liquor();
    b.total();
}