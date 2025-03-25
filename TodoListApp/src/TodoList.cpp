#include "TodoList.h"
#include <iostream>
#include <algorithm>
#include <iomanip>

// Constructor
TodoList::TodoList() : nextId(1) {}

void TodoList::addTask(const std::string& name, const std::string& description) {
    tasks.push_back(Task(nextId++, name, description));
    std::cout << "Task added successfully!" << std::endl;
}

void TodoList::listTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks found." << std::endl;
        return;
    }

    std::cout << std::left << std::setw(5) << "ID" 
              << std::setw(20) << "Name" 
              << std::setw(30) << "Description" 
              << "Status" << std::endl;
    std::cout << std::string(60, '-') << std::endl;

    for (const auto& task : tasks) {
        std::cout << std::left << std::setw(5) << task.getId() 
                  << std::setw(20) << task.getName() 
                  << std::setw(30) << task.getDescription() 
                  << (task.getIsCompleted() ? "Completed" : "Pending") << std::endl;
    }
}

void TodoList::completeTask(int taskId) {
    auto it = std::find_if(tasks.begin(), tasks.end(), 
        [taskId](const Task& task) { return task.getId() == taskId; });

    if (it != tasks.end()) {
        it->setIsCompleted(true);
        std::cout << "Task " << taskId << " marked as completed." << std::endl;
    } else {
        std::cout << "Task with ID " << taskId << " not found." << std::endl;
    }
}

void TodoList::removeTask(int taskId) {
    auto it = std::remove_if(tasks.begin(), tasks.end(), 
        [taskId](const Task& task) { return task.getId() == taskId; });

    if (it != tasks.end()) {
        tasks.erase(it, tasks.end());
        std::cout << "Task " << taskId << " removed successfully." << std::endl;
    } else {
        std::cout << "Task with ID " << taskId << " not found." << std::endl;
    }
}

bool TodoList::taskExists(int taskId) const {
    return std::any_of(tasks.begin(), tasks.end(), 
        [taskId](const Task& task) { return task.getId() == taskId; });
}