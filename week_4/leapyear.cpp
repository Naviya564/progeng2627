# include <iostream>

bool leap_year (int year){
    bool ly;
     if ((year%4)==0){
        if ((year%100)==0){
            if ((year%400==0)){
                 ly=true;
            }
            else{
                 ly=false;
            }
        }
        else{
             ly=true;
        }
     }
    else{
         ly = false;
    }
    return ly;
}


 int main (){
    std::cout << (leap_year(1600) == true) << std::endl;
    std::cout << (leap_year(1700) == false) << std::endl;
    int input_year;
    std::cin>>input_year;

    if (leap_year(input_year)){
        std::cout<<"leap year"<<std::endl;
    }
    else{
        std::cout<<"not a leap year"<<std::endl;
    }
}