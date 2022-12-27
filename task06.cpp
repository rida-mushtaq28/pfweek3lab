#include <iostream>
using namespace std;
main (){
string name;
int matric;
int inter;
int ecat;
float percentageMatric;
float percentageInter;
float percentageEcat;
float weightageMatric;
float weightageInter;
float weightageEcat;
float aggregate;
float obtain;

cout << "obtain:";
cin >> obtain ;
percentageMatric = (obtain/1100.0) * 100;
cout << "percentageMatric :"<< percentageMatric << endl;

cout << "obtain :";
cin  >> obtain;
percentageInter = (obtain/550.0) * 100;
cout << "percentageInter :"<< percentageInter << endl;

cout <<"obtain";
cin >> obtain;
percentageEcat = (obtain/400)*100;
cout << "percantageEcat :"<< percentageEcat << endl;

cout << "weightage matric";
cin >> weightageMatric;
weightageMatric = (percentageMatric/100)*10;
cout << "weightageMatric :"<< weightageMatric  << endl;

cout << "weightage inter:";
cin >> weightageInter;
weightageInter = (percentageInter/100)*60;
cout << "weightageInter :"<< weightageInter  << endl;

cout << "weightage ecat:";
cin >> weightageEcat;
weightageEcat = (percentageEcat/100)*30;
cout << "weightageEcat :"<< weightageEcat  << endl;

aggregate =(weightageMatric+weightageInter+weightageEcat);
cout << "aggregate :"<< aggregate << endl;


























}