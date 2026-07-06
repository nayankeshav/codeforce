#include <iostream>
 
int main()
{
    int a, guest_uniform_switch = 0;
    std::cin >> a;
    int array[a][2];
    
    for(int i=0;i<a;i++){
        int home,guest;
        std::cin >> home >> guest;
        
        array[i][0] = home;
        array[i][1] = guest;
        
    }
    
    for(int i =0;i<a;i++){
        for(int j = 0;j<a;j++){
            if(array[i][0] == array[j][1]){
                guest_uniform_switch++;
            }
        }
    }
    
    std::cout << guest_uniform_switch;
    
    
}
