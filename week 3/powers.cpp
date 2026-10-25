# include <iostream>
int main () {
    double x, acc=1;
    int n, count =0;
    std::cin >> x >> n;
    while (count<n){
        acc=acc*x;
        count =count+1;
    }
    std::cout<<x<<"^"<<n<<"="<<acc<<std::endl;

}