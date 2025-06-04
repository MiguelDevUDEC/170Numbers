// GonzalezMiguel - 69025100098
// Created by Miguel on 17/05/2025.
//


#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int count = 0, counterKids = 0, counterTeens = 0, counterAdults = 0, counterOld = 0;
    int ages[175];
    float sum = 0, sumKid = 0, sumTeens = 0, sumAdults = 0, sumOld = 0;
    float averageKids = 0, averageTeens = 0, averageAdults = 0, averageOld = 0;

    srand(time(NULL));
    while (count < 175) {
        int age = (rand() % 80) + 1;
        cout << "La edad agregada en la posicion " << count << " es: " << age << " entra en la categoria: " << endl;
        if (age <= 12){
          counterKids++;
          cout << "Kids" << endl;
          }
        if (age >= 13 && age <= 17) {
          counterTeens++;
          cout << "Teens" << endl;
          }
        if (age >= 18 && age <= 60){
          counterAdults++;
          cout << "Adults" << endl;
          }
        if (age >= 61) {
          counterOld++;
          cout << "Old" << endl;
          }
        sum += age;
        ages[count] = age;
        count++;
    }
    float average = sum / 175;


    int kidsAges[counterKids];
    int teensAges[counterTeens];
    int adultsAges[counterAdults];
    int oldAges[counterOld];

    for (int i = 0, j=0, k=0, l=0, m=0; i < 175; i++) {
        if (ages[i] <= 12) {
            kidsAges[j] = ages[i];
            j++;
        }
        if (ages[i] >= 13 && ages[i] <= 17) {
            teensAges[k] = ages[i];
            k++;
        }
        if (ages[i] >= 18 && ages[i] <= 60) {
            adultsAges[l] = ages[i];
            l++;
        }
        if (ages[i] >= 61) {
            oldAges[m] = ages[i];
            m++;
        }
    }

    for (int i = 0; i < counterKids; i++) {
        sumKid += kidsAges[i];
    }
    averageKids = sumKid / counterKids;

    for (int i = 0; i < counterTeens; i++) {
        sumTeens += teensAges[i];
    }
    averageTeens = sumTeens / counterTeens;

    for (int i = 0; i < counterAdults; i++) {
        sumAdults += adultsAges[i];
    }
    averageAdults = sumAdults / counterAdults;

    for (int i = 0; i < counterOld; i++) {
        sumOld += oldAges[i];
    }
    averageOld = sumOld / counterOld;


    float varianceKids = 0, varianceTeens = 0, varianceAdults = 0, varianceOld = 0;

    for (int i = 0; i < counterKids; i++) {
        varianceKids += pow(kidsAges[i] - averageKids, 2);
    }
    for (int i = 0; i < counterTeens; i++) {
        varianceTeens += pow(teensAges[i] - averageTeens, 2);
    }
    for (int i = 0; i < counterAdults; i++) {
        varianceAdults += pow(adultsAges[i] - averageAdults, 2);
    }
    for (int i = 0; i < counterOld; i++) {
        varianceOld += pow(oldAges[i] - averageOld, 2);
    }

    varianceKids /= counterKids - 1;
    varianceTeens /= counterTeens - 1;
    varianceAdults /= counterAdults - 1;
    varianceOld /= counterOld - 1;


    cout << "Kids: " << counterKids << endl;
    cout << "Teens: " << counterTeens << endl;
    cout << "Adults: " << counterAdults << endl;
    cout << "Old: " << counterOld << endl;
    cout << "The average age of the population is: " << average << endl;
    cout << "The average age of the kids is: " << averageKids << endl;
    cout << "The average age of the teens is: " << averageTeens << endl;
    cout << "The average age of the adults is: " << averageAdults << endl;
    cout << "The average age of the old is: " << averageOld << endl;
    cout << "The variance of the kids' population is: " << varianceKids << endl;
    cout << "The variance of the teens' population is: " << varianceTeens << endl;
    cout << "The variance of the adults' population is: " << varianceAdults << endl;
    cout << "The variance of the old population is: " << varianceOld << endl;
    cout << "The standard deviation of the kids' population is: " << sqrt(varianceKids) << endl;
    cout << "The standard deviation of the teens' population is: " << sqrt(varianceTeens) << endl;
    cout << "The standard deviation of the adults' population is: " << sqrt(varianceAdults) << endl;
    cout << "The standard deviation of the old population is: " << sqrt(varianceOld) << endl;
    cout << "The sum of the ages of the population is: " << sum << endl;

    return 0;
}
