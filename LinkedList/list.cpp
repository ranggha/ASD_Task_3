#include "list.h"

void createList(List &L) {
    // NIM : 1301164017
   first(L) = NULL;
}

address alokasi(infotype x)
{
     // NIM :1301164017
    address P;
        address P = newelmlist;
        info(P) = x;
        next(P) = NULL;
    return P;
}

void viewlist(List L)
{
     // NIM :1301164017
    address(P) = first(L);
        while (next(P)!=NULL) {
            cout<<info(P)<<" ";
            P = Next (P);
        }
        cout<<endl;
}

void dealokasi(address &P)
{
    // NIM :1301164017
    delete (P);
}

void insertFirst(List &L, address P)
{
    // NIM :1301164017
    next (P) = first (L);
    first(L) = P;
    }

void insertLast(List &L, address P)
{
    // NIM :1301164017
   address Q = first (L);
   first (L) = P;
}

address findElm(List L, infotype x)
{
    address P;
    //-------------your code here-------------
    // NIM :1301164017
        while (P != NULL && info(P) != x)
        {
            P = next(P);
        }
    //----------------------------------------
    return P;
}

void deleteFirst(List &L, address &P) {

    // NIM :1301164017
        if (first(L) != NULL)
        {
            P = first(L);
            first(L) = next(P);
            next(P) = NULL;
        }


    //----------------------------------------
}

void deleteLast(List &L, address &P) {

    // NIM :1301164017

    if (first(L) != NULL)
    {
        P = first(L);
            if (next(P) == NULL)
            {
                deleteFirst(L,P);
            }
          else
            {
                while (next(next(P)) != NULL)
                {
                    P = next(P);
                }
                address(Q) = P;
                P = next(P);
                next(Q) = NULL;
            }
    }


    //----------------------------------------
}

void printInfo(List L)
{
    // NIM : 1301164017

    address P = first(L);
      while(P != NULL)
      {
          cout<<info(P) <<" ";
          P = next(P);
      }
      cout<<endl;
}


void insertAfter(address Prec, address P)
{
    // NIM :1301164017
    if (first(L) != NULL)
        {
            next(P) = next(Prec);
            next(Prec) = P;
        }
      else
        {
            insertFirst(L,P);
        }

}
void deleteAfter(address Prec, address &P)
{
    // NIM :1301164017
    P = next(Prec);
    next(Prec) = next (P);
    next(P) = NULL;
}

