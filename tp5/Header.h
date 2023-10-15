//
//  Header.h
//  tp5
//
//  Created by Indra Mahesa on 15/10/23.
//

#ifndef Header_h
#define Header_h

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_1302220067(List &L);
address createNewElement_1302220067(infotype x);
void insertLast_1302220067(List &L, address P);
void showAllData_1302220067(List L);
address findMax_1302220067(List &L);
void showMiddle_1302220067(List &L);

// Menu things
void showInsertMenu_1302220067(List &L);


#endif /* Header_h */
