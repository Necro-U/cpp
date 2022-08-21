#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    class Employee
    {
    private:
        string name;
        int salary;
        int id;
        /* data */
    public:
        Employee(/* args */);
        ~Employee();
        string get_name()
        {
            return name;
        }
        int salary()
        {
            return salary;
        }
        void set_salary()
        {
            name =
        }
    };

    Employee::Employee()
    {
        cout << "Employee created";
    }

    Employee::~Employee()
    {
        cout << "destroyer called";
    }

    return 0;
}
