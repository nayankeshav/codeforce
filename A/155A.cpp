#include <iostream>

int main()
{
    int highest, lowest, a, score = 0;
    std::cin >> a;
    
    int list[a];
    
    for(int i = 0; i<a; i++){
        std::cin >> list[i];
    }
    
    highest = list[0];
    lowest = list[0];
    
    for(int i =1;i<a;i++){
        if((list[i] - list[i-1]) > 0 && highest < list[i]){
            highest = list[i];
            score++;
        }
        else if((list[i] - list[i-1]) < 0 && lowest > list[i] ){
            lowest = list[i];
            score++;
        } 
    }
    
    std::cout << score;
    
}
