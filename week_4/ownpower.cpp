# include <iostream>
double mypow (double base, int exp){
    //input parameters defined
    double result=1;
    int posexp=exp;
    if (exp<0){
        posexp = exp*-1;
    }
    //create another variable to store exp so can multiply value of exp by -1 without worrying about changing exp value (need it when taking inverse on line 10) 
    for (int i=0; i<posexp; i++){
        result = base*result;
    }
    if (exp<0){
        result = 1/result;
    }
    return result;
}

int main(){
std::cout<<"2 to the power of 3 is "<< mypow(2,3)<<std::endl;
std::cout<<"5^6 is "<< mypow(5,6)<<std::endl;
std::cout<<"5^-8 is "<<mypow(5,-8)<<std::endl;
 int x,n,result=0;
    std::cin>>x>>n;

    for(int i=1; i<=n; i++){
        result = mypow(x,i) +result;
    } 
    std::cout<<result<<std::endl;

}
