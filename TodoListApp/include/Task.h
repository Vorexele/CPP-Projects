#pragma once

#include <string>

class Task {
private:
    int id;
    std::string name;
    std::string description;
    bool isCompleted;

public:
    // Default constructor
    Task();

    // Parameterized constructor
    Task(int id, const std::string& name, const std::string& description, bool isCompleted = false);

    // Destructor
    ~Task();

    // Getters
    int getId() const;
    std::string getName() const;
    std::string getDescription() const;
    bool getIsCompleted() const;

    // Setters
    void setId(int newId);
    void setName(const std::string& newName);
    void setDescription(const std::string& newDesc);
    void setIsCompleted(bool completed);
};