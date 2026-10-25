# include <iostream>
int main () {
    int n;
    int count2=0;
    std::cin>>n;

while (count2<n){
    int count1=0; 
    while (count1<n){
        std::cout<<"*";
        count1=count1+1;
}
    std::cout<<std::endl;
    count2=count2+1;
}
}