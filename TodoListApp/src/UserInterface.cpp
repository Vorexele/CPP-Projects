#include "UserInterface.h"
#include <iostream>
#include <limits>

void UserInterface::displayMenu() const {
    std::cout << "\n--- Todo List Menu ---" << std::endl;
    std::cout << "1. Add Task" << std::endl;
    std::cout << "2. List Tasks" << std::endl;
    std::cout << "3. Complete Task" << std::endl;
    std::cout << "4. Remove Task" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "Enter your choice: ";
}

void UserInterface::run() {
    int choice;
    std::string name, description;
    int taskId;

    while (true) {
        displayMenu();
        
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please try again." << std::endl;
            continue;
        }
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1: 
                std::cout << "Enter task name: ";
                std::getline(std::cin, name);
                std::cout << "Enter task description: ";
                std::getline(std::cin, description);
                todoList.addTask(name, description);
                break;

            case 2:
                todoList.listTasks();
                break;

            case 3:
                std::cout << "Enter task ID to mark as completed: ";
                if (std::cin >> taskId) {
                    todoList.completeTask(taskId);
                } else {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid task ID." << std::endl;
                }
                break;

            case 4:
                std::cout << "Enter task ID to remove: ";
                if (std::cin >> taskId) {
                    todoList.removeTask(taskId);
                } else {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid task ID." << std::endl;
                }
                break;

            case 5:
                std::cout << "Exiting Todo List App. Goodbye!" << std::endl;
                return;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}