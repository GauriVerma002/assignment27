#include <iostream>
using namespace std;
class Person
{
private:
    int a, b;

public:
    Person operator++(int )
    {
        Person temp;
        temp.a = a++;
        temp.b = b++;
        return temp;
    }
    Person operator++()
    {
        Person temp;
        temp.a = ++a;
        temp.b = ++b;
        return temp;
    }

    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout << " a=" << a << "  "
             << "b=" << b << endl;
    }
};
int main()
{
    Person P1;
    P1.setdata(3, 4);
    (++P1).showdata();
    (P1++).showdata();
    return 0;
}
