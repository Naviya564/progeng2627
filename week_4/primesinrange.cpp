# include <iostream>


int smallest_factor(int n){
    for(int cf = 2; cf < n; cf++){
        if( (n % cf) == 0){
        return cf;
        //this return will not stop defining the function if n is prime cos if n is prime, this return is skipped
        }
    }
    return n;
    //now function will return n when n is prime!!!
}


int main (){
int lower, upper,n;
std::cout<<"enter lower and upper bounds"<<std::endl;
std::cin>>lower>>upper;
for (n=lower; n<=upper; n++){
     if (smallest_factor(n)==n)
     //SMARRTTTTT, if smallest factor of n=n that means n is prime
     std::cout<<n<<std::endl;
}

}
