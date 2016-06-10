/*************************************************************************
	> File Name: test.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 16 Apr 2016 11:19:10 PM EDT
 ************************************************************************/

#include<iostream>
using namespace std;


class Base
{
public:
    int base_c;
    void base_fun3() {base_fun2(); base_fun1(); ++base_c; ++base_b; ++base_a;};

protected:
    int base_b;
    void base_fun2() {base_fun1(); base_fun3();++base_c; ++base_b; ++base_a;};
private:
    int base_a;
    void base_fun1() {base_fun3(); base_fun2();++base_c; ++base_b; ++base_a;};
}; 

class Child: private Base
{
public:
    int child_c;
    void child_fun3() {base_fun3(); base_fun2(); /*base_fun1();*/++base_c; ++base_b;/* ++base_a;*/};
protected:
    int child_b;
    void child_fun2() {base_fun3(); base_fun2(); /*base_fun1();*/++base_c; ++base_b;/* ++base_a;*/};
private:
    int child_a;
    void child_fun1() {base_fun3(); base_fun2(); /*base_fun1();*/++base_c; ++base_b;/* ++base_a;*/};
};

int mian()
{
    Base b1;
    cout << b1.base_c << endl;
    b1.base_fun3();
    //cout << b1.base_b << endl;
    //b1.base_fun2();
    //cout << b1.base_a << endl;
    //b1.base_fun1();
    Child c1;
    //cout << c1.base_c << endl;
    //c1.base_fun3();
    //cout << c1.base_b << endl;
    //c1.base_fun2();
    //cout << c1.base_a << endl;
    //c1.base_fun1();
    return 0;
}

