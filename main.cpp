#include<iostream>

int maze(int row,int column){
    int rightways = 0;
    int downways = 0;
    if(row == 1 && column == 1){
        return 1;
    }
    if(row == 1){
        rightways += maze(row,column-1);
    }
    else if(column == 1){
        downways += maze(row-1,column);
    }
    else{
        rightways += maze(row,column-1);
        downways += maze(row-1,column);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main(){
    std::cout<<"Enter the number of rows : ";
    int row;
    if(!(std::cin>>row)){
        std::cout<<"Invalid row input.\n";
        return 0;
    }
    if(row<1){
        std::cout<<"Invalid row input.\n";
        return 0;
    }

    std::cout<<"Enter the number of column : ";
    int column;
    if(!(std::cin>>column)){
        std::cout<<"Invalid column input.\n";
        return 0;
    }
    if(column<1){
        std::cout<<"Invalid column input.\n";
        return 0;
    }
    int result = maze(row,column);
    std::cout<<"Total Number of ways = "<<result<<'\n';
    return 0;
}