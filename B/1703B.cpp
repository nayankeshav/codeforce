#include <iostream>
#include <string>
 
int main()
{
    int a;
    std::cin >> a;
    
    for(int i=0;i<a;i++){
        
        int b, count = 0;
        std::cin >> b;
        
        std::string input;
        std::cin >> input;
        
        bool checker[b];
        for(int m=0; m<b; m++){
            checker[m] = true;
        }
        
        for(int j=0;j<b;j++){
            for(int k = 0; k<b ;k++){
                
                if(input[j] == input[k] && checker[k] == true){
                    count = count + 2;
                    
                    for(int x=0; x<b; x++) {
                        if(input[x] == input[k]) {
                            checker[x] = false;
                        }
                    }
                }
                else if(input[j] == input[k] && j == k){
                    count++;
                }
            }
        }
        
        std::cout << count << std::endl;
        
    }
}
