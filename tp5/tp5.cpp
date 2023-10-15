//
//  tp5.cpp
//  tp5
//
//  Created by Indra Mahesa on 15/10/23.
//

#include <stdio.h>
#include <iostream>
#include "Header.h"

using namespace std;

void createList_1302220067(List &L) {
    first(L) = NULL;
}

address createNewElement_1302220067(infotype x) {
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLast_1302220067(List &L, address P) {
    if(first(L) == NULL) {
        first(L) = P;
    } else {
        address Q = first(L);
        while(next(Q) != NULL) {
            Q = next(Q);
        }
        
        next(Q) = P;
    }
}

void showAllData_1302220067(List L) {
    address Q = first(L);
    
    if(Q == NULL) {
        cout << "List kosong";
    } else {
        while(Q != NULL) {
            cout << info(Q) << " ";
            Q = next(Q);
        }
    }
    
    cout << endl;
}

address findMax_1302220067(List &L) {
    address MAX = first(L);
    address Q = first(L);
    
    while(Q != NULL) {
        if(info(Q) > info(MAX)) {
            MAX = Q;
        }
        Q = next(Q);
    }
    
    return MAX;
}

void showMiddle_1302220067(List &L) {
    int length = 0;
    address Q = first(L);
    
    while(Q != NULL) {
        length = length + 1;
        Q = next(Q);
    }
    
    if(length == 1) {
        cout << "Nilai tengah adalah: " << info(first(L));
    } else {
        address mid = first(L);
        for (int i = 0; i < length / 2; i++) {
          mid = next(mid);
        }

        cout << "Nilai tengah adalah: " << info(mid);
    }
 }
