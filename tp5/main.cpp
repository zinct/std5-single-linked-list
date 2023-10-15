//
//  main.cpp
//  tp5
//
//  Created by Indra Mahesa on 15/10/23.
//

#include <iostream>
#include "Header.h"

using namespace std;

int main() {
    List L;
    int inputMenu;
    
    createList_1302220067(L);
    
    address dum;
    
    while(inputMenu != 0) {
        cout << "=====MENU=====" << endl;
        cout << "1. Menambah N data baru" << endl;
        cout << "2. Menampilkan semua data" << endl;
        cout << "3. Menampilkan nilai tertinggi" << endl;
        cout << "4. Menampilkan data yang ditengah" << endl;
        
        cout << "Masukkan menu : ";
        cin >> inputMenu;
        
        if(inputMenu == 1) {
            showInsertMenu_1302220067(L);
        } else if(inputMenu == 2) {
            string inputMenu2;
            
            while(inputMenu2 != "Y") {
                showAllData_1302220067(L);
                
                cout << endl;
                cout << "Kembali ke menu utama? (Y/N) ";
                cin >> inputMenu2;
            }
        } else if(inputMenu == 3) {
            string inputMenu3;
            
            while(inputMenu3 != "Y") {
                address max = findMax_1302220067(L);
                
                cout << "Nilai tertinggi adalah : " << info(max);
                
                cout << endl;
                cout << "Kembali ke menu utama? (Y/N) ";
                cin >> inputMenu3;
            }
        } else if(inputMenu == 4) {
            string inputMenu4;
            
            while(inputMenu4 != "Y") {
                showMiddle_1302220067(L);
                
                cout << endl;
                cout << "Kembali ke menu utama? (Y/N) ";
                cin >> inputMenu4;
            }
        } else {
            cout << "Menu tidak ada" << endl;
        }
    }
    
    cout << "ANDA TELAH KELUAR DARI PROGRAM";
    
    return 0;
}

void showInsertMenu_1302220067(List &L) {
    string inputMenu;
    
    while(inputMenu != "Y") {
        int nData;
        int inputData;
        address newElement;
        
        cout << "Jumlah data yang akan ditambah : ";
        cin >> nData;
        
        for(int i = 0; i < nData; i++) {
            cout << "Masukan data baru : ";
            cin >> inputData;
            
            newElement = createNewElement_1302220067(inputData);
            insertLast_1302220067(L, newElement);
        }
        
        cout << "Kembali ke menu utama? (Y/N) ";
        cin >> inputMenu;
    }
}
