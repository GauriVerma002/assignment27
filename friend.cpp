#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
   
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
    friend Complex operator+(Complex C1,Complex C2);
};
 Complex operator+(Complex C1,Complex C2)
    {
        Complex temp;
        temp.a = C1.a + C2.a;
        temp.b = C2.b + C2.b;
        return temp;
    }
int main()
{
    Complex C1, C2, C3;
    C1.setdata(3, 4);
    C2.setdata(3, 4);
    C3 = C1 + C2;
    C3.showdata();
    return 0;
}
