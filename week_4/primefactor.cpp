# include <iostream>
int smallest_factor(int n)
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
        return cf;
        }
    }

int main (){
    int n;
    smallest_factor(n);
    std::cout<<smallest_factor(5)<<std::endl;
    std::cout<<smallest_factor(10)<<std::endl;
    std::cout<<smallest_factor(9)<<std::endl;
}
