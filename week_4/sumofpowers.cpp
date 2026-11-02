# include <iostream>
# include <cmath>

int main(){
    int x,n,result=0;
    std::cin>>x>>n;

    for(int i=1; i<=n; i++){
        result = std::pow(x,i) +result;
    } 
    std::cout<<result<<std::endl;
}