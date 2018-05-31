/*****************************/
// start 31.05.2018
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
float search_values(float a[], float value, int max);

int main()
{   
    int max = 8, i = 0, j = 0;
    float search_time[7] = {1,1,2,3,4,5,6};
    float chart_tab[10];
    
    point points_tab[max] =
        {
    		{1,1},{1,2},{1,3},{1.5,4.5},{2,0},{9.8,1.5},{8,1},{5,1}
	    };

   // search_time[0] = min_x(points_tab, max);
    
    // converting times to lines in chart
    for (i=0; i< 10; i++)
        chart_tab [i] = search_values(search_time, i, 10);
        
    cout << endl << "after converting: ";
    for (i=0; i< 10; i++) cout << chart_tab[i] << ", ";
    cout << endl;
        

    // wykres
    cout << "t[ms]" << endl;
    cout << " ^" << endl;
    for (i=9; i>0; i--)
        {
        cout << i << "|";
        if (chart_tab[i]>0 && chart_tab[i])
            {
            for (j=0; j<chart_tab[i]; j++) cout << " ";
            cout << "*";
            }
        cout << endl;
        }
    cout << i << "|";
    for (i=1; i<53; i++) cout << "_";
    cout << endl << "   10     100     1k     10k     100k     1M      10M";
    
    

    
    cout << endl << endl;
    cout << "searching time for   10: " << search_time[0] << endl; 
    cout << "searching time for  100: " << search_time[1] << endl; 
    cout << "searching time for   1k: " << search_time[2] << endl; 
    cout << "searching time for  10k: " << search_time[3] << endl; 
    cout << "searching time for 100k: " << search_time[4] << endl; 
    cout << "searching time for   1M: " << search_time[5] << endl; 
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

float search_values(float a[], float value, int max)
    {// converting values from tab to another chart tab
        for (int i=0; i<max; i++)
            {
                if (a[i] == value) return (i*8);
            }
        return -1;
    }



