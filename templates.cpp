#include<iostream>
template<typename T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    std::cout<<add<float>(2.7,3.6)<<std::endl;
    std::cout<<add<int>(2,3)<<std::endl;
    return 0;
}
