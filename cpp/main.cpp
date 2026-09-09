#include <iostream>
using namespace std;



int main() {
    int choice;
    double a,b;
    cout << "~~~~Welcome to my calculator~~~~~\n" ;
    do{
        cout << "Press\n1.Addition\n2.Subraction\n3.Multiply\n4.Division\n5.Exist\n" ;
        cout << "Enter your chooice" << endl;
        cin >> choice;

        if(choice >= 1 && choice<= 4){
            cout << "Enter two Numbers :- " << endl;
            cin >> a >> b;
        }
    
        switch(choice){
            case 1: cout << "Addition :- " << (a+b) << endl;
                break;
            case 2: cout << "Subsraction :- " << (a-b) << endl;
                break;
            case 3: cout << "Multiplication :- " << (a*b) << endl;
                break;
            case 4:
                if(b>0){
                    cout << "Division :- " << (a/b) << endl;
                }
                else{
                    cout << "B is zero" << endl;
                }
                break;
            case 5: break;
            default : cout << "Invalid Option" << endl;
            

            
        }

    }while (choice != 5);
    
    
    return 0;
}

