# include <iostream>
double mypow (double base, int exp){
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

int sumofpowers (int x, int n){
    int answer=0;
    for (int i=1; i<=n; i++ ){
        answer=answer+ mypow(x,i);
        //calling the old function!
    }
    return answer;
}

int main (){
    std::cout<<sumofpowers(3,5)<<std::endl;
    std::cout<<sumofpowers(6,5)<<std::endl;
}