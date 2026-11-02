# include <iostream>

void division(int a, int b, int& result, int& remainder){
    result=a/b;
    remainder=a%b;

}

int main (){
    int a,b,result,remainder;
    std::cout<<"key in values of a and b"<<std::endl;
    std::cin>>a>>b;
    division(a, b, result, remainder);
    std::cout<<"the result is "<<result<<"and the remainder is "<<remainder<<std::endl;
}