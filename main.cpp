
#include <iostream>
using namespace std;
int main() {
        string nama;
        string ulang;
    do{
   cout<<"masukkan nama      ";
   cin>>nama;
   cout<<"namamu adalah   ";
   cout<<nama<<endl;
   cout<<"apakah anda mau";
       cout<<"menggulang,tekan y atauY    ";
   cin>>ulang;
    }
    while(ulang=="y" || ulang=="Y");  
    return 0;
    system("pause");
}
