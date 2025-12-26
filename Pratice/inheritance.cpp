#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Worker {
protected:
    string name;
    int workingHours;

public:
    Worker(const string& name, int workingHours) : name(name), workingHours(workingHours) {}
    virtual ~Worker() {}

    void setName(const string& name) { this->name = name; }
    string getName() const { return name; }

    void setWorkingHours(int workingHours) { this->workingHours = workingHours; }
    int getWorkingHours() const { return workingHours; }

    virtual void printInfo() const = 0; // Pure virtual function
};

class Employee : public Worker {
private:
    string department;
    double salary;

public:
    Employee(const string& name, int workingHours, const string& department, double salary)
        : Worker(name, workingHours), department(department), salary(salary) {}

    void setDepartment(const string& department) { this->department = department; }
    string getDepartment() const { return department; }

    void setSalary(double salary) { this->salary = salary; }
    double getSalary() const { return salary; }

    void printInfo() const override {
        cout << "Employee: " << name << ", Working Hours: " << workingHours
             << ", Department: " << department << ", Salary: " << salary << endl;
    }
};

class Manager : public Worker {
private:
    int numManagedEmployees;
    int numProjects;

public:
    Manager(const string& name, int workingHours, int numManagedEmployees, int numProjects)
        : Worker(name, workingHours), numManagedEmployees(numManagedEmployees), numProjects(numProjects) {}

    void setNumManagedEmployees(int numManagedEmployees) { this->numManagedEmployees = numManagedEmployees; }
    int getNumManagedEmployees() const { return numManagedEmployees; }

    void setNumProjects(int numProjects) { this->numProjects = numProjects; }
    int getNumProjects() const { return numProjects; }

    void printInfo() const override {
        cout << "Manager: " << name << ", Working Hours: " << workingHours
             << ", Managed Employees: " << numManagedEmployees << ", Projects: " << numProjects << endl;
    }
};

class Project {
private:
    string name;
    int progress;

public:
    Project(const string& name, int progress) : name(name), progress(progress) {}

    void setName(const string& name) { this->name = name; }
    string getName() const { return name; }

    void setProgress(int progress) { this->progress = progress; }
    int getProgress() const { return progress; }

    void printInfo() const {
        cout << "Project: " << name << ", Progress: " << progress << "%" << endl;
    }
};

int main() {
    vector<Worker*> workers;

    workers.push_back(new Employee("Alice", 40, "HR", 50000));
    workers.push_back(new Employee("Bob", 45, "IT", 60000));
    workers.push_back(new Manager("Charlie", 50, 10, 3));
    workers.push_back(new Manager("Dave", 55, 15, 5));

    for (Worker* worker : workers) {
        worker->printInfo();
    }

    for (Worker* worker : workers) {
        delete worker;
    }

    Project project("New Website", 50);
    project.printInfo();

    return 0;
}
