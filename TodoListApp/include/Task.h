#pragma once
#define TASK_H

#include <string>

class Task {
    private:
        int id;
        std::string name;
        std::string description;
        bool isCompleted;

    public:
        // Constructor
        Task(); // Default constructor
        Task(int id, const std::string name, const std::string description, bool isCompleted = false);

        // Destructor
        ~Task();

        // Getters
        int getId() const;
        const std::string getName() const;
        const std::string getDescription() const;
        bool getIsCompleted() const;

        // Setters
        void setId(int id);
        void setName(std::string name);
        void setDescription(std::string description);
        void setIsCompleted(bool isCompleted);

};