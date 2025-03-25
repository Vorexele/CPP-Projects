#pragma once

#include <vector>
#include <string>
#include "Task.h"

class TodoList {
private:
    std::vector<Task> tasks;
    int nextId;

public:
    // Constructor
    TodoList();

    // Add a new task
    void addTask(const std::string& name, const std::string& description);

    // List all tasks
    void listTasks() const;

    // Mark a task as completed
    void completeTask(int taskId);

    // Remove a task
    void removeTask(int taskId);

    // Check if a task exists
    bool taskExists(int taskId) const;
};