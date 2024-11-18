/*
Izveidot klasi "Burtu rinda" - Cqueue (queue, pa vienu pusi ieliek, pa otru izņem!), kurā glabājas masīvs ar burtiem (char) garumā pieci un rindas elementu skaits.
Klasei izveidot šādas metodes: (1) konstruktors, (2) destruktors, kurš paziņo par 
objekta likvidēšanu un likvidēto elementu skaitu (ja likvidēšanas brīdī rinda nav tukša),
(3) metode "Ielikt" - enqueue, kas pievieno rindai elementu, ja tā nav pilna, (4) metode "Izņemt" - dequeue,
kas izņem no rindas elementu un atgriež tā vērtību, (5) metode "CikElementu" - 
count, kas atgriež elementu skaitu rindā, (6) metode "VaiTukša" - isEmpty, kas noskaidro, vai rinda ir tukša. 
*/
#include<iostream>
using namespace std;

class BurtuRinda { // private
    char arr[5];
    int element_sk;

    public:
        BurtuRinda(char t) { // init or burturinda
            cout << "Tika izveidots " << t << endl;

            return;
        }

        ~BurtuRinda() { // ~destruktors, kas bija tilde? burtuRinda
            cout << "Tika likvidets " << this << endl;
            // cik paliek

            return;
        }

        void Ielikt(char (&T)[], char ielikt) {
            if (CikElementu(T) < 4) {
                cout << "Tika izveidots " << ielikt << endl;
                // konstruktors(T[CikElementu(T)]); // nedrisk
                T[CikElementu(T) + 1] = ielikt;
            } else {
                cout << "Pilns" << endl;
            }

            return;
        }

        void Iznemt(char T[]) {
            cout << "Tika likvidets " << CikElementu(T) << "Elements" << endl;
            // destruktors(T[CikElementu(T)]); // nedriskt
            T[CikElementu(T)] = '\0';

            return;
        }

        int CikElementu(char T[]) {
            int count = 0;
            while (T[count] != '\0') {
                count++;
            }
            return count;
        }

        bool VaiTuksa(char T) {
            if (T == '\0') {
                return true;
            } else {
                return false;
            }
        }
};