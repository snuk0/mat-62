#include <bits/stdc++.h>
using namespace std;


const int SIZE = 1000;


void zadanie1() {
    cout << "Zadanie 1:" << endl;
    ifstream in("liczby1.txt");
    int t[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        in >> t[i];
    }
    int min = 9999999;
    int max = 0;
    for (int i = 0; i < SIZE; i++) 
    {
        if (t[i] < min) min = t[i];
        if (t[i] > max) max = t[i];
    }
    cout << "Najmniejsza: " << min << endl;
    cout << "Najwieksza: " << max << endl;
}

void zadanie1vec() {
    cout << "Zadanie 1 VECTOR:" << endl;
    ifstream in("liczby1.txt");
    int a;
    
    while(in >> a)
    {
        vector <int> v(a);
        for (int i = 0; i < a; i++) 
        {
            in >> v[i];
        }
        int min = 9999999;
        int max = 0;
        for (int i = 0; i < a; i++) 
        {
            if (v[i] < min) min = v[i];
            if (v[i] > max) max = v[i];
        }
        cout << "Najmniejsza: " << min << endl;
        cout << "Najwieksza: " << max << endl;
    }
    
    
}


void zadanie2() {
    cout << "Zadanie 2:" << endl;
    int t[SIZE];
    ifstream in("liczby2.txt");
    for (int i = 0; i < 1000; i++) 
    {
        in >> t[i];
    } 
    int maxx, cnt = 0, mxcnt = 0, first = 0;
    for (int i = 1; i < SIZE; i++) 
    {
        if (t[i] >= t[i - 1]) 
        {
            cnt++;
            if (first == 0) 
            {
                first = t[i - 1];
                cnt++;
            }
        }
        else {
            if (cnt > mxcnt) 
            {
                mxcnt = cnt;
                maxx = first;
            }
            first = 0;
            cnt = 0;
        }
    }
    cout << "Pierwszy element: " << maxx << endl;
    cout << "Liczba elementow: " << mxcnt << endl;
}


void zadanie2vec() {
    cout << "Zadanie 2 VECTOR:" << endl;
    ifstream in("liczby1.txt");
    int a;

    while (in >> a)
    {
        vector <int> v(a);
        for (int i = 0; i < a; i++) {
            in >> v[i];
            if (v[i] == 0) { break; }
        }
        int maxx, cnt = 0, mxcnt = 0, first = 0;
        for (int i = 1; i < SIZE; i++)
        {
            if (v[i] >= v[i - 1])
            {
                cnt++;
                if (first == 0) {
                    first = v[i - 1];
                    cnt++;
                }
            }
            else {
                if (cnt > mxcnt) {
                    mxcnt = cnt;
                    maxx = first;
                }
                first = 0;
                cnt = 0;
            }
        }
        cout << "Pierwszy element: " << maxx << endl;
        cout << "Liczba elementow: " << mxcnt << endl;
    }
    
}

void z3() {
    cout << "Zadanie 3:" << endl;
    int t1[SIZE], t2[SIZE];
    ifstream in1("liczby1.txt");
    ifstream in2("liczby2.txt");
    for (int i = 0; i < SIZE; i++) 
    { 
        in1 >> oct >> t1[i]; 
    }
    for (int i = 0; i < SIZE; i++)
    {
        in2 >> t2[i];
    }
    int actn = 0, bctn = 0;
    for (int i = 0; i < SIZE; i++) 
    {
        if (t1[i] == t2[i]) actn++;
        if (t1[i] > t2[i]) bctn++;
    }
    cout << "a) " << actn << endl << "b) " << bctn << endl;
}

int main() {
    zadanie1();
    zadanie1vec();
    zadanie2();
    zadanie2vec();
    z3();
}
