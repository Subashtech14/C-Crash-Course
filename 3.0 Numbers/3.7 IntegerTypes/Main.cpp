#include<iostream>
int main()
{
    //Braced Initialization
    int elephant_count;
    int lion_count {}; //Default Initialization is 0
    int dog_count {10};
    int cat_count {15};
    //Can use expression as a initializer
    int domesticated_animals {dog_count + cat_count};
    //can't typecast float to int safe
    // int norrowing_conversion {2.4};
    std::cout << "Domesticated animals : " << domesticated_animals << std::endl;
    
    //Functional Initialization
    int apple_count (10);
    int orange_count (20);
    int fruit_count (apple_count + orange_count);
    int narrowing_conversion (2.4);
    std::cout << "Fruit count : " << fruit_count << " Narrowing conversion : " << narrowing_conversion << "" << std::endl;
    return 0;
}