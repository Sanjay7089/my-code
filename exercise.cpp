#include <iostream>
#include <cmath>
using namespace std;

class simplecal
{
protected:
    int a, b;

public:
    void set_number(int p, int q);
    void get_cal1();
};
void simplecal::set_number(int p, int q)
{
    a = p;
    b = q;
    cout << "the numbers you enterd are  " << a << " and " << b << endl;
}
void simplecal::get_cal1()
{

    float divide, sum, multiplication, substract;

    cout << "the sum is :";
    sum = (a + b);
    cout << sum << endl;

    cout << "the multiplication is :";
    multiplication = (a * b);
    cout << multiplication << endl;

    cout << "the substraction is :";
    substract = (a - b);
    cout << substract << endl;

    cout << "the division is :";
    divide = a / b;
    cout << divide << endl;
}
class scifi_cal
{
protected:
    int a, b;

public:
    void set_number1(int r, int s);
    void get_scifical();
};
void scifi_cal::set_number1(int r, int s)
{
    a = r;
    b = s;
}
void scifi_cal::get_scifical()
{
    float powerof_a, powerof_b, cosine_a, cosine_b, sinof_a, sinof_b, squaeroot_a, squaeroot_b;

    cout << "the square of numbers " << a << " and " << b << " is " << endl;
    powerof_a = pow(a, 2);
    cout << powerof_a << endl;

    powerof_b = pow(b, 2);
    cout << powerof_b << endl;

    cout << "the sin  of numbers " << a << " and " << b << " is " << endl;
    sinof_a = sin(a);
    cout << sinof_a << endl;

    sinof_b = sin(b);
    cout << sinof_b << endl;

    cout << "the cosine of numbers " << a << " and " << b << " is " << endl;
    cosine_a = cos(a);
    cout << cosine_a << endl;

    cosine_b = cos(b);
    cout << cosine_b << endl;

    cout << "the squareroot of numbers " << a << " and " << b << " is " << endl;
    squaeroot_a = sqrt(a);
    cout << squaeroot_a << endl;

    squaeroot_b = sqrt(b);
    cout << squaeroot_b << endl;
}
class hybridcal : public simplecal, public scifi_cal
{
public:
    void hybridshow(int p, int q)
    {
        cout << "welcome to the hybrid calulator " << endl;

        set_number(p, q);

        cout << "simple calculator" << endl;
        get_cal1();

        set_number1(p, q);

        cout << "scientific calculator" << endl;
        get_scifical();
    }
};
int main()
{
    int a, b;
    hybridcal c;
    cout << " enter the number a and b" << endl;
    cin >> a >> b;
    c.hybridshow(a, b);

    //    simplecal c1;
    //    c1.set_number(10,5);
    //    c1.get_cal1();

    //    scifi_cal c2;
    //    c2.set_number1(5,5);
    //    c2.get_scifical();
    return 0;
}
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and perfoms +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and perfoms any four scientific operation of your chioice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
  
*/