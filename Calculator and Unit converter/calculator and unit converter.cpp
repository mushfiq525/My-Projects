#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main(){

    int opt, unit;  // opt = calculator, converter    unit = unit choice
    double n1, n2, length, mass, time, temp, currency;  // unit values
    int length_choice, mass_choice, time_choice, temp_choice, currency_choice; // particular unit convert
    char operation, calculator_cont='y', converter_cont='y';

    cout<< "Welcome to calculator application"<<endl;
    cout<< "\n\nWhat do you want to use?"<<endl<< "\n1. Calculator\n2. Unit converter"<<endl;
    cout<< "\nEnter your choice : ";
    cin>>opt;

    //calculator
    if(opt==1)
    {
        while(calculator_cont=='y')
        {
            system("cls");
            cout<< "Welcome to calculator"<<endl;
            cout<< "\nEnter operation (+, -, *, /) : ";
            cin>>operation;
            switch(operation){
                case '+':
                    cout<< "Enter two numbers : ";
                    cin>>n1>>n2;
                    cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
                    break;
                case '-':
                    cout<< "Enter two numbers : ";
                    cin>>n1>>n2;
                    cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
                    break;
                case '*':
                    cout<< "Enter two numbers : ";
                    cin>>n1>>n2;
                    cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
                    break;
                case '/':
                    cout<< "Enter two numbers : ";
                    cin>>n1>>n2;
                    cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
                    break;
                default:
                    cout<< "Invalid Operator!!"<<endl;
            }
            cout<< "\n\nDo you want to continue using calculator? [y/n] :\t";
            cin>>calculator_cont;
        }
        cout<< "\n\nThank you for using my calculator application\n\n\n";
    }
    //unit converter
    if(opt==2)
    {
        while(converter_cont=='y')
        {
            system("cls");
            cout<< "Welcome to unit Converter"<<endl;
            cout<< "\n\nChoose your operation:\n"<<endl;
            cout<< "1. Length\n2. Mass\n3. Time\n4. Temperature\n5. Currency"<<endl;
            cout<< "\nEnter your choice: ";
            cin>>unit;
            switch(unit)
            {
            case 1:
                system("cls");
                cout<< "1. m - ft\n2. ft - m\n\n";
                cout<< "Enter your choice: ";
                cin>>length_choice;
                if(length_choice==1){
                    cout<< "\nEnter length in meter :\t";
                    cin>>length;
                    cout<< "\n"<<length<< " m = " << length*3.28084 <<  " ft"<<endl;
                }
                else if(length_choice==2){
                    cout<< "\nEnter length in feet :\t";
                    cin>>length;
                    cout<< "\n"<<length<< " ft = " << length/3.28084 <<  " m"<<endl;
                }
                else
                    cout<< "\nInvalid choice"<<endl;
                break;
            case 2:
                system("cls");
                cout<< "1. kg - lbs\n2. lbs - kg\n\n";
                cout<< "Enter your choice: ";
                cin>>mass_choice;
                if(mass_choice==1){
                    cout<< "\nEnter mass in kg :\t";
                    cin>>mass;
                    cout<< "\n"<<mass<< " kg = " << mass*2.2 <<  " lbs"<<endl;
                }
                else if(mass_choice==2){
                    cout<< "\nEnter mass in lbs :\t";
                    cin>>mass;
                    cout<< "\n"<<mass<< " lbs = " << mass/2.2 <<  " kg"<<endl;
                }
                else
                    cout<< "\nInvalid choice"<<endl;
                break;
            case 3:
                system("cls");
                cout<< "1. hour - minutes\n2. minutes - hour\n\n";
                cout<< "Enter your choice: ";
                cin>>time_choice;
                if(time_choice==1){
                    cout<< "\nEnter time in hour :\t";
                    cin>>time;
                    cout<< "\n"<<time<< " hr = " << time*60 <<  " min"<<endl;
                }
                else if(time_choice==2){
                    cout<< "\nEnter time in minutes :\t";
                    cin>>time;
                    cout<< "\n"<<time<< " min = " << time/60 <<  " hr"<<endl;
                }
                else
                    cout<< "\nInvalid choice"<<endl;
                break;
            case 4:
                system("cls");
                cout<< "1. Celsius - Fahrenheit\n2. Fahrenheit - Celsius\n\n";
                cout<< "Enter your choice: ";
                cin>>temp_choice;
                if(temp_choice==1){
                    cout<< "\nEnter temperature in Celsius :\t";
                    cin>>temp;
                    cout<< "\n"<<temp<< " C = " << (9*temp)/5+32 <<  " F"<<endl;
                }
                else if(temp_choice==2){
                    cout<< "\nEnter temperature in Fahrenheit :\t";
                    cin>>temp;
                    cout<< "\n"<<temp<< " F = " << (temp-32)*5/9 <<  " C"<<endl;
                }
                else
                    cout<< "\nInvalid choice"<<endl;
                break;
            case 5:
                system("cls");
                cout<< "1. Dollar - Taka\n2. Taka - Dollar\n\n";
                cout<< "Enter your choice: ";
                cin>>currency_choice;
                if(currency_choice==1){
                    cout<< "\nEnter currency in Dollar :\t";
                    cin>>currency;
                    cout<< "\n"<<currency<< " $ = " << currency*104.17 <<  " Tk"<<endl;
                }
                else if(currency_choice==2){
                    cout<< "\nEnter currency in Taka :\t";
                    cin>>currency;
                    cout<< "\n"<<currency<< " Tk = " << currency/104.17 <<  " $"<<endl;
                }
                else
                    cout<< "\nInvalid choice"<<endl;
                break;
            default:
                cout<< "\nChoose correctly!!"<<endl;

            }
            cout<< "\n\nDo you want to continue using unit converter? [y/n] :\t";
            cin>>converter_cont;
        }
        cout<< "\n\nThank you for using my unit converter application\n\n\n";

    }


    return 0;
}
