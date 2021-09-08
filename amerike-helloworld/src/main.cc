#include<iostream>
#include<myheader.hh>




int main()
{
    int numberInterger{1};//asi se inicializa algo
    float floatnumber{5.2f};
    const char* stringChar{"My string char"};
    char chararray[]{"charrarray"};
    std:: string Mystring {"Mystring from stl"};

 //No usar using namespace std
   std:: cout<<numberInterger<<std::endl;
   std:: cout<<floatnumber<<std::endl;
   std:: cout<<stringChar<<std::endl;
   std:: cout<<stringChar<<std::endl;
   // std:: cout << "Suma: "<< Add("Hello","World");
    std:: cin.get();
    return 0;
}