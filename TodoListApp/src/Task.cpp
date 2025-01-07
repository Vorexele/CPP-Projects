#include "../include/Task.h"

Task::Task() : id(0), name(""), description(""), isCompleted(false) {}

Task::Task(int id, std::string name, std::string description, bool isCompleted) : id(id), name(name), description(description), isCompleted(isCompleted) {}

//Getters
int Task::getId() const {
    return id;
}

const std::string Task::getName() const {
    return name;
}

const std::string Task::getDescription() const {
    return description;
}

bool Task::getIsCompleted() const {
    return isCompleted;
}

//Setters

void Task::setId(int id) {
    this->id = id;
}

void Task::setName(std::string name) {
    this->name = name;
}

void Task::setDescription(std::string description) {
    this->description = description;
}

void Task::setIsCompleted(bool isCompleted) {
    this->isCompleted = isCompleted;
}

Task::~Task() {}