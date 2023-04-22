#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i; // int *
    auto e = &ci; // const int *
    const auto f = ci; // const int
    auto &g = ci; // const int &
    // error!: auto &h = 42;
    const auto &j = 42;
    auto k = ci, &l = i; // int, int &
    auto &m = ci, *p = &ci; // const int &, const int *
    // error!: auto &n = i, *p2 = &ci; // int &, const int *
    a = 42;
    b = 42;
    c = 42;
    d = 0; // d = 42 can not compile, d = 0 equals to d = nullptr
    e = 0; // e = 42 can not compile, e = 0 equals to e = nullptr
    // error!: g = 42;
}