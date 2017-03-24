#include <iostream>
#include "list.h"
#include "operasi.h"

using namespace std;

address get_input()
{
    infotype x;
    cout<<"Masukan Nim :  ";
    cin>>x.nim;
    cout<<"Masukan Nama : ";
    cin>>x.nama;
    return alokasi (x);
}


void mainMenu(List L)
{
    /**
	* IS : List sudah dibuat
    * PR : memberikan output pilihan menu kepada user
    *       1. insert first
    *       2. insert after
    *       3. insert last
    *       4. delete first
    *       5. delete after
    *       6. delete last
    *       7. view list
    *       8. insertion sort
    *       9. search
    */
    //-------------your code here-------------
        address P,Q;
        infotype dicari;
        int pil;
        do
        {
            cout<<" Pilihan Menu "<<endl;
            cout<<" 1.Insert First "<<endl;
            cout<<" 2.Insert Last "<<endl;
            cout<<" 3.Insert After "<<endl;
            cout<<" 4.Delete First "<<endl;
            cout<<" 5.Delete After "<<endl;
            cout<<" 6.Delete Last "<<endl;
            cout<<" 7.view List "<<endl;
            cout<<" 8.Insertion Sort "<<endl;
            cout<<" 9. Exit "<<endl;
            cout<<" Masukan Pilihan Anda : ";
            cin>>pil;
            switch(pil);
            {
                case 1;
                        P = get_input();
                        insertFirst(L,P);
                        break;
                case 2;
                        P = get_input();
                        insertLast(L,P);
                        break;
                case 3;
                        cout<<"Masukan Nim yang akan dicari : ";
                        cin>>dicari.nim;
                        Q = findElm(L,dicari);
                        if( Q != NULL)
                        {
                            P = get_input();
                            insertAfter(Q,P);
                        }; break;
                case 4;
                        printInfo(L);
                        break;
                case 5;
                        deleteFirst(L,P);
                        dealokasi(P);
                        break;
                case 6;
                        deleteLast(L,P);
                        dealokasi(P);
                        break;
                case 7;
                        cin>> dicari.nim;
                        Q = findElm(L, dicari);
                        if (Q != NULL)
                            {
                                deleteAfter(Q,P);
                                dealokasi(P);
                            };  break;

            }
        }


    //----------------------------------------


    int main()
{
    List L;
    createList(L);


    mainMenu(L);

    return 0;
}


}
