#include "com.brostagma.add/add.h"
#include <iostream>

using namespace std;

void early_test();

int main()
{

    early_test();

    std::cout << "The sum of 3 and 4 is: " << add(3 ,4) << '\n';


    return 0;
}


void early_test()
{
    std::cout << "A";

    return;

    std::cout << "B";
}