#include <iostream>
int addNumbers(int first_number, int second_number){
    return first_number + second_number;
}
int main()
{
    int first_number = 10;
    // int first_number {10};
    int second_number{20};
    std::cout << "First number" << first_number << std::endl;
    std::cout << "Second number" << second_number << std::endl;
    int sum = addNumbers(first_number, second_number);
    std::cout << "Sum " << sum << std::endl;
    int sums = addNumbers(20, 25);
    std::cout << "Sum " << sums << std::endl;
    return 0;
}
