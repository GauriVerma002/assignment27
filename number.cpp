#include <iostream>
using namespace std;
class Number
{
private:
    int a, b, c;

public:
    void operator-()
    {
        a = -a;
        b = -b;
        c = -c;
    }

    void setdata(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void showdata()
    {
        cout << " a=" << a << "  "
             << "b=" << b << " "
             << "c=" << c << endl;
    }
};
int main()
{
    Number N1;
    N1.setdata(3, 4, 5);
    -N1;
    N1.showdata();

    return 0;
}
