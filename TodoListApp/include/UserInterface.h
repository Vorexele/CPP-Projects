#pragma once

#include "TodoList.h"

class UserInterface {
private:
    TodoList todoList;

public:
    // Display the main menu
    void displayMenu() const;

    // Run the application
    void run();
};