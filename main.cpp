#include <cctype>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int items;
float avg;
float sumOf;
int pos = 0;


void space_3()
{
    cout << endl; cout << endl; cout << endl; 
}
void average()
{
    cout << "How many numbers do you want to calculate?: " << endl;
    cin >> items;
    vector <int> v(items, 0);

    for(int i = 0; i < items; i++)
    {
        cout << "Number?: ";
        cin >> v.at(pos);
        cout << endl;
        pos++;
        sumOf = accumulate(v.begin(), v.end(), 0);
    }
    space_3();
    avg = (sumOf) / items;
    cout << "Average: " << avg;
    space_3();
    cout << "Your highest grade was: " << *max_element(v.begin(), v.end());
    space_3();
    cout << "Your lowest grade was: " << *min_element(v.begin(), v.end());
    space_3();
    if(avg < 65)
    {
       cout << endl;
       cout << "Your average is below 65, you failed" << endl;
    }else
    {
        cout << endl; 
        cout << "Your average is above 65, you passed" << endl;
    }
}
int main()
{
    average();
    return 0;
}