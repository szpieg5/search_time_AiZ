/*****************************/
// 31.05.2018
// L.SZ
// czas wyszukiwania, rysowanie wykresu
// AiZ
/*****************************/

#include <iostream>
using namespace std;

struct point  
    {
    float x, y;
    } ;
//typedef struct point ks;


float min_x(point tab[], int max_n);
int count_III_points(point tab[], int max_n);
int count_II_III_points(point tab[], int max_n);

int main()
{   
    int max = 8, i = 0;
    
    // zapisanie danych do struktury podczas jej inicjacji aby mozna bylo przetestowac program
	// taki szybki sposob zapisu danych do struktury tablicy mozna zastosowac tylko podczas inicjacji struktury
    point points_tab[max] =
        {
    		{1,1},{1,2},{1,3},{-1.5,-4.5},{2,0},{-9.8,1.5},{-8,1},{5,1}
	    };

    // wykres
    cout << "t[ms]" << endl;
    cout << " ^" << endl;
    for (i=9; i>0; i--) cout << i << "|" << endl;
    cout << i << "|";
    for (i=1; i<50; i++) cout << "_";
    cout << endl << "   10     100     1k     10k     100k     1M     7";
    
    cout << endl << endl;
    cout << "czas1: " << min_x(points_tab, max) << endl; 
    cout << "czas2: " << min_x(points_tab, max) << endl; 
    cout << "czas3: " << min_x(points_tab, max) << endl; 
    return 0;
}

// szukanie punktu 
float min_x(point tab[], int max_n)
    {
     float min;
     min = tab[0].x;
     for (int i = 1; i<max_n; i++) 
        if (min > tab[i].x ) min = tab[i].x;
     return min;   
    }




