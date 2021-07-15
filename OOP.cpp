#include <iostream>
#include <time.h>
#include "Customer.h"

int main()
{
    srand(time(NULL));
    std::cout << std::fixed;
    Customer* Cust1 = new Customer;
    Cust1->menu();
    system("pause>0");
    return 0;
}

