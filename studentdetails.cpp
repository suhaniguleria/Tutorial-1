#include <iostream>
#include <string>
using namespace std;

class Student 
{
    public:
      string name; 

    Student(const std::string& studentName, int studentId) : name(studentName), id(studentId) {}

    int getId() const {
        return id;
    }

    private:
        int id; 
};

int main() 
{
    Student student1("Shyam",9922);

    cout<< "Student Name: " << student1.name<<endl;
    cout<< "Student ID: " << student1.getId();

    return 0;
}

