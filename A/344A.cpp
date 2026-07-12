#include <iostream>
int main()
{
    int a,b, buffer=0, count=1;
    std::cin >> a;
    for(int i = 0;i<a;i++){
        std::cin >> b;
        if(buffer!=b && i!=0){
            count++;
        }
        buffer = b;
    }
    std::cout << count;
}
