#include <iostream>
#include <vector>

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

        int getAvg()
        {
            return m_avg;
        }

        int getId()
        {
            return m_id;
        }

        std::string getFirst()
        {
            return m_first;
        }

        std::string getLast()
        {
            return m_last;
        }

        // Void mean a function that didnt return nothing
        void print(){
            std::cout << "First: " << m_first << std::endl;
            std::cout << "Last: " << m_last << std::endl;
            std::cout << "ID: " << m_id << std::endl;
            std::cout << "Average: " << m_avg << std::endl;
        }

};



int main (int argc, char * argv[])
{

    // Student Object 1
    Student s1;
    Student s2("John", "Doe", 123, 3.14);
    Student s3("Farel","Deksano", 292299991, 99.11);

    s1.print();
    s2.print();
    s3.print();


    // Vector 1
    std::vector<int> vec;
    vec.push_back(42);
    vec.push_back(227);
    vec.push_back(1336);

    for (size_t i = 0 ; i < vec.size();i++)
    {
        std::cout << vec[i] << std::endl;
    }


    for (int a : vec)
    {
        std::cout << a << std::endl;
    }


    // Vector 2
    std::vector<float> vecFloat;
    vecFloat.push_back(31.2f);
    vecFloat.push_back(21.8f);
    vecFloat.push_back(11.1f);

    for(auto a : vecFloat)
    {
        std::cout << a << std::endl;
    }
       
    return 0;
}