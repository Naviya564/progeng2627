# include <iostream>
# include <vector>

int main (){
    int n;
    std::cin>>n;
    int input; 
    std::vector<int>v;

std::cout<<"pls enter n numbers"<<std::endl;
    for (int i=0; i<n; i++){
        //NOT i==n
        std::cin>>input;
        v.push_back(input);
    }
     int t;
     std::cout<<"please input a number t"<<std::endl;
     std::cin>>t;

     for(int i=0; i<t; i++){
     std::cout<<v[i]<<std::endl;
    }

}
