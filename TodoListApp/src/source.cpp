#include <iostream>
#include "../include/Task.h"

int main() {

    Task task1(1, "Task 1", "This is the first task", false);

    std::cout << "Task 1: " << task1.getName()
        <<"| Description: " <<task1.getDescription()
        <<"| Complete: " << (task1.getIsCompleted() ? "YES" : "NO")<< std::endl;

    return 0;
}