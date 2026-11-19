#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    std::cout<<"how many elements do you want to enter"<<std::endl;
    int n;
    std::cin>>n;
    int input;
    for (int i=0; i<n; i++){
        std::cin>>input;
        v.push_back(input);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}