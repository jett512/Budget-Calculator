// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {

    int x;
    cout << "Do you want to know money leftover(1), or calculate budget(2) ";
    cin >> x;
    
    while (x == 1 || 2) {

}
    if (x == 1) {
        float leftover();
        {


            float income, rent, util, grocery, gas, media, spending, invest, misc, save, expenses, totalIncome;

            cout << "Monthly Income?" << endl;
            cin >> income;

            //cout << "Rent?" << endl;
           // cin >> rent;

            cout << "Utilities?" << endl;
            cin >> util;

            cout << "Groceries?" << endl;
            cin >> grocery;

            cout << "Gas?" << endl;
            cin >> gas;

           // cout << "Phone and Youtube?" << endl;
            //cin >> media;

            cout << "Spending?" << endl;
            cin >> spending;

            cout << "Invest?" << endl;
            cin >> invest;

            cout << "Lifestyle?" << endl;
            cin >> misc;

            cout << "Saved?" << endl;
            cin >> save;

            expenses =  445 + util + grocery + gas + 87 + spending + invest + misc + save;
            totalIncome = income - expenses;
            
            if (expenses < totalIncome) {
                cout << totalIncome << "$ This much remaining ";
            }

            else {

                cout << -1 * totalIncome << "$ lost  ";

            }
        }
    }



    if (x==2) {
        
        float calc(); {
           
            float calIncome;
        
            cout << "what is your income" << endl;
            cin >>  calIncome;

            cout << "Here is your Budget"<< endl;
            cout << "---------------------" << endl;

            float calRent = 445;
            float calUtil = 83;
            float calGroc = calIncome * .12;
            float calGas = calIncome * .1;
            float calMedia = 87;
            float calSpend = calIncome * .133;
            float calMisc = calIncome * .12;
            float calSave = calIncome * .04;
            float calInvest = calIncome * .08;

            cout << "Rent " << calRent << endl;
            cout << "Utility " << calUtil << endl;
            cout << "Groceries " << calGroc << endl;
            cout << "Gas " << calGas << endl;
            cout << "Phone/Youtube " << calMedia << endl;
            cout << "Spending " << calSpend << endl;
            cout << "Lifestyle " << calMisc << endl;
            cout << "Save " << calSave << endl;
            cout << "Invest " << calInvest << endl;
        }

       

    }

    else {
        cout << "Invalid input";

    }

};












// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
