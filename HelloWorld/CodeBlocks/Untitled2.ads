#include <iostream>
using namespace std;

int main()
{
    string user, pass;

    cout << "------Form Login pake IOStream-----";
    cout << "Masukkan Username: ";
    cin >> user;

    cout << "Masukkan Password: ";
    cin >> pass;

    if(user == "aufal"){
        if(pass == "marom"){
            cout << "Berhasil Login";
        }else{
            cout << "Password Salah";
        }
    }else{
        cout << "Username salah";
    }

}
