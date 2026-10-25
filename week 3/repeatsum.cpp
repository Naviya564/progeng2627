# include <iostream>
int main () {
    int n, count =0;
    double x, acc=0;
    std::cin>>x>>n;
    while (count<n){
        acc=acc+x;
        count = count +1;
    }
    std::cout<<x<<"*"<<n<<"="<<acc<<std::endl;
}