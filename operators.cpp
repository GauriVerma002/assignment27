#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a = a + C.a;
        temp.b = b + C.b;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a = a - C.a;
        temp.b = b - C.b;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.a = a * C.a;
        temp.b = b * C.b;
        return temp;
    }
    Complex operator==(Complex C)
    {
        Complex temp;
        temp.a = a == C.a;
        temp.b = b == C.b;
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
    Complex C1, C2, C3;
    C1.setdata(3, 4);
    C2.setdata(5, 6);
    C3 = C1 + C2;
    C3.showdata();
    C3 = C1 - C2;
    C3.showdata();
    C3 = C1 * C2;
    C3.showdata();
    C3 = C1 == C2;
    C3.showdata();
    return 0;
}
