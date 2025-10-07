#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct grade
{
    char name[20];
    double q, m, fe;
    double fg;
    char elg;
};

double FinAve(double v, double m, double f) {
    return (0.35 * v) + (0.30 * m) + (0.35 * f);
}

char LettGrade(double Final) {
    char equiv;
    if (Final >= 90) {
        equiv = 'A';
    } else if (Final >= 80) {
        equiv = 'B';
    } else if (Final >= 70) {
        equiv = 'C';
    } else if (Final >= 60) {
        equiv = 'D';
    } else {
        equiv = 'F';
    }
    return equiv;
}

int main ()
{
    grade stud[5];
    clrscr();
    cout << "Enter the students' information:" << endl;
    for (int i = 0; i < 5; i++) 
    {
        clrscr();
        cout << "Student " << i + 1 << " Name: ";
        cin >> stud[i].name;
        cout << "Student " << i + 1 << " Average Quiz Score: ";
        cin >> stud[i].q;
        cout << "Student " << i + 1 << " Midterm Score: ";
        cin >> stud[i].m;
        cout << "Student " << i + 1 << " Final Term Score: ";
        cin >> stud[i].fe;

        stud[i].fg = FinAve(stud[i].q, stud[i].m, stud[i].fe);
        stud[i].elg = LettGrade(stud[i].fg);
    }

    int row = 5;
    for (int i = 0; i < 5; i++)
    {
        gotoxy(1, row + i);
        cout << stud[i].name;
        gotoxy(22, row + i);
        cout << stud[i].q;
        gotoxy(32, row + i);
        cout << stud[i].m;
        gotoxy(42, row + i);
        cout << stud[i].fe;
        gotoxy(51, row + i);
        cout << stud[i].fg;
        gotoxy(67, row + i);
        cout << stud[i].elg;
    }

    // Sorting from highest final grade to lowest.
    int temp;
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < 4; y++) {
            if (stud[y].fg > stud[y + 1].fg) {
                temp = stud[y].fg;
                stud[y].fg = stud[y + 1].fg;
                stud[y + 1].fg = temp;
            }
        }
    }
}


