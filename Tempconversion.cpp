#include <iostream>
#include <string>
int main () {
    double temp_in, temp_out;
    std::string unit_in, unit_out;
std::cin>>temp_in>>unit_in;
if (unit_in=="celsius"){
    unit_out="fahrenheit";
    temp_out= temp_in * 1.8 +32;
}
else{
    unit_out = "celsius";
    temp_out = (temp_in -32) / 1.8;
}
std::cout<<temp_out<<" "<<unit_out<<std::endl;
}