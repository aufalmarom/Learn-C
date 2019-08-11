#include <iostream>
using namespace std;

int main()
{
    string user, pass;

    cout << "------Form Login pake IOStream-----" endl;
    cout << "Masukkan Username: ";
    cin >> user;

    cout << "Masukkan Password: ";
    cin >> pass;

    if(user == "aufal"){
        if(pass == "marom"){
            cout << "Berhasil Login" endl;
        }else{
            cout << "Password Salah" endl;
        }
    }else{
        cout << "Username salah" endl;
    }

}
