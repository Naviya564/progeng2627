# include <iostream>
int main () {
    double length, width, area, perimeter;
    std::cout<<"please enter the width of the rectangle" << std::endl;
    std::cin>>width;
    std::cout<<"please enter the length of the rectangle"<<std :: endl;
    std::cin>>length;
    area = width * length;
    perimeter = 2*width + 2*length;
    std:: cout<<"the area is" << area<< "and the perimeter is" <<perimeter<< std::endl;


}