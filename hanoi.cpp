#include <iostream>
#include <conio.h>

void tower(int a,char from,char aux,char to){
    if(a==1){
       std::cout<<"\t\tMove disc 1 from "<<from<<" to "<<to<<"\n";
       return;
    }
    else{
       tower(a-1,from,to,aux);
       std::cout<<"\t\tMove disc "<<a<<" from "<<from<<" to "<<to<<"\n";
       tower(a-1,aux,from,to);
    }
}

int main(){

     int n;
     std::cout<<"\n\t\t*****Tower of Hanoi*****\n";
     std::cout<<"\t\tEnter number of discs : ";
     std::cin>>n;
     std::cout<<"\n\n";
     tower(n,'A','B','C');
     getch();
}
