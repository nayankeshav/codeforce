#include <iostream>
int main()
{
    int x, ques_done_check = 0;
    std::cin >> x;
    for(int i =0;i<x;i++){
        int a,b,c;
        std::cin >> a >> b >> c;
        
        if((a+b+c) >=2){
            ques_done_check++;
        }
    }
    
    std::cout << ques_done_check;
}
