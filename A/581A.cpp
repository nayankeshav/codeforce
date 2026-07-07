#include <iostream>
int main()
{
    int red, blue, pair, single;
    std::cin >> red >> blue;
    if(red>blue){
        pair = blue;
        single = (red-blue)/2;
    }
    else{
        pair = red;
        single = (blue-red)/2;
    }
    std::cout << pair << " "<< single;
}
