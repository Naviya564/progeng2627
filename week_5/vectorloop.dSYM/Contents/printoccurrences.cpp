# include <iostream>
# include <vector>
int main (){
    int n;
    std::cout<<"please input n"<<std::endl;
    std::cin>>n;
    int input;
    std::vector<int>v;


    for (int i=0; i<n; i++){
        std::cin>>input;
        v.push_back(input);

     int s;
     std::cout<<"please input s"<<std::endl;
     std::cin>>s;

     int count=0;
     for (int i=0; i<n; i++){
        if (v[i]==s){
        count = count +1;
     }
    }
    if (count!=0){
    std::cout<<"there are "<<count<<" occurrences of s at indices "<<std::endl;
    }
    
    else{
        std::cout<<"there are no occurrences of " <<s<<std::endl;
    }

//CREATE ANOTHER FOR LOOP!!

    for (int i=0;i<n;i++){
        if (v[i]==s){
            std::cout<<i<<std::endl;
        }
    }
    
}