# include <iostream>
int main () {
    double pounds,euros, exchange_rate;
    std::cout << "enter the amount of british pounds" << std:: endl;
    std::cin>>pounds;
    std::cout<<"enter the exchange rate"<<std::endl;
    std::cin>>exchange_rate;
    euros = pounds*exchange_rate;
    std::cout<<"the amount of euros is"<<euros<<std::endl;
}