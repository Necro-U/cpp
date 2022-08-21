#include <iostream>

using namespace std;

void first()
{
    static int x = 4;
    cout << x << endl;
    x++;
}

void second()
{
    static int x = 6;

    x++;
}

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
        Employee(string isim, int id_num, int salary_price)
        {
            this->name = isim;
            this->id = id_num;
            this->salary = salary_price;
        }

        Employee(string isim, int salary_price)
        {
            this->name = isim;
            this->id = 0;
            this->salary = salary_price;
        }

        ~Employee()
        {
            cout << "Gule Gule" << endl;
        }
        void get_name()
        {
            cout << name << endl;
        }
        void get_salary()
        {
            cout << salary << endl;
        }
        void set_salary(int new_sal)
        {
            salary = new_sal;
        }
        void set_name(string new_name)
        {
            name = new_name;
        }
    };

    // to use class as pointer
    // Employee *employe = new Employee();

    // Employee me("Ubeydullah", 0, 3000);
    // Employee you("Ahmet", 1, 2000);

    // me.get_name();

    first();
    second();
    first();
    return 0;
}
