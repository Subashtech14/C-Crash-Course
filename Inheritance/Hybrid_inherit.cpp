#include <iostream>
#include <string>

// Base class
class Person {
public:
    void setName(const std::string& name) {
        this->name = name;
    }

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
    }

protected:
    std::string name;
};

// First derived class
class Employee : public Person {
public:
    void setEmployeeInfo(int employeeId) {
        this->employeeId = employeeId;
    }

    void displayEmployeeInfo() const {
        displayInfo(); // Call base class function
        std::cout << "Employee ID: " << employeeId << std::endl;
    }

private:
    int employeeId;
};

// Second derived class
class Student : public Person {
public:
    void setStudentInfo(int studentId) {
        this->studentId = studentId;
    }

    void displayStudentInfo() const {
        displayInfo(); // Call base class function
        std::cout << "Student ID: " << studentId << std::endl;
    }

private:
    int studentId;
};

// Hybrid (multiple) inheritance
class PartTimeEmployee : public Employee, public Student {
public:
    // Qualify the call to setName to resolve ambiguity
    void setPartTimeEmployeeInfo(double hourlyRate) {
        Employee::setName("Bob Johnson"); // Specify which base class to use
        Employee::setEmployeeInfo(54321);
        Student::setStudentInfo(98765);
        this->hourlyRate = hourlyRate;
    }

    void displayPartTimeEmployeeInfo() const {
        displayEmployeeInfo(); // Call function from Employee
        displayStudentInfo();  // Call function from Student
        std::cout << "Hourly Rate: $" << hourlyRate << std::endl;
    }

private:
    double hourlyRate;
};

int main() {
    // Create objects of different classes
    Employee emp;
    Student stu;
    PartTimeEmployee partTimeEmp;

    // Set information using member functions
    emp.setName("John Doe");
    emp.setEmployeeInfo(12345);

    stu.setName("Alice Smith");
    stu.setStudentInfo(67890);

    partTimeEmp.setPartTimeEmployeeInfo(15.75);

    // Demonstrate hybrid inheritance
    std::cout << "Employee Info:" << std::endl;
    emp.displayEmployeeInfo();

    std::cout << "\nStudent Info:" << std::endl;
    
