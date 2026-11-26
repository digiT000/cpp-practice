#include <iostream>
#include <vector>
#include <fstream>

// Create h file


class Student
{

    std::string m_first = "First";
    std::string m_last  = "Last";
    int         m_id    = 0;
    float       m_avg   = 0;
    
    public:
        Student(){}

        Student(std::string first, std::string last, int id, float avg)
        : m_first(first)
        , m_last(last)
        , m_id(id)
        , m_avg(avg)
        {
        }

        int getAvg() const
        {
            return m_avg;
        }

        int getId() const
        {
            return m_id;
        }

        std::string getFirst() const
        {
            return m_first;
        }

        std::string getLast() const
        {
            return m_last;
        }

        // Void mean a function that didnt return nothing
        // adding const, mean its make sure this function below didnt change any value
        void print() const
        {
            // if we try to be sneaky and try to change the value of m_first, it will give us an error
            // m_first = "changes";

            std::cout << m_first << " " << m_last << " " << m_id << " " << m_avg << std::endl;
        }

};

class Course
{
    std::string m_name = "Course";
    std::vector<Student> m_students;

    public:
    // Default Constructor
    Course(){}

    Course(const std::string& name )
    : m_name(name)
    {
    }

    void addStudent(const Student& student)
    {
        m_students.push_back(student);
    }

    // We only get, not changing anyting
    const std::vector<Student>& getStudents() const
    {
        return m_students;
    }

    void loadFromFile(const std::string& filename)
    {
        // 1. Need file input stream
        std::ifstream fileIn(filename);
        std::string temp;
        std::string first,last;
        int id;
        float avg;


        // To check if the file is open or not
        if(fileIn.is_open())
        {
            std::cout << "File is open" << std::endl;
            
            
            while (fileIn >> first)
            {
            
            fileIn >> last >> id >> avg;
            addStudent(Student(first,last,id,avg));
            }
        }
        else
        {
            std::cout << "File is not open" << std::endl;
        } 
        
    }

    void print()const
    {
        for (const auto& student : m_students)
        {
            student.print();
        }
    }  
};



int main (int argc, char * argv[])
{

    // Student Object 1
    Student s1;
    Student s2("John", "Doe", 123, 3.14);
    const Student s3("Farel","Deksano", 292299991, 99.11);

    Course comp4300("COMP4300");
    comp4300.loadFromFile("introduction/students.txt");
    comp4300.print();

    // s3.print();

    // Vector 1
    std::vector<int> vec;
    vec.push_back(42);
    vec.push_back(227);
    vec.push_back(1336);

    for (size_t i = 0 ; i < vec.size();i++)
    {
        // std::cout << vec[i] << std::endl;
    }


    for (int a : vec)
    {
        // std::cout << a << std::endl;
    }


    // Vector 2
    std::vector<float> vecFloat;
    vecFloat.push_back(31.2f);
    vecFloat.push_back(21.8f);
    vecFloat.push_back(11.1f);

    for(auto a : vecFloat)
    {
        // std::cout << a << std::endl;
    }
       
    return 0;
}