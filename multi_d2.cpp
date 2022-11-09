/*
The second way to create a multi-dimensional array
This the dynamic allocation
*/

#include <iostream>

int main(){
    int** x=new int*[3];
    for(int i=0;i<3;i++){
        x[i]= new int[4];
        for(int j=0;j<4;j++){
            std::cin>>x[i][j];
        }
    }

    std::cin.get();
    return 0;
}