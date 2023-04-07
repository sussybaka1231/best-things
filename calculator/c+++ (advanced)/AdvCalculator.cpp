#include <iostream>
#include <math.h>
#include <cstring>

using namespace std;
int main() {
    double user_number1;
    double user_number2;
    double advanced_user_number1;
    double advanced_user_number2;
    double sqrt_result;
    double number_to_percentage_input;
    double number_to_percentage;
    double bigger_or_smaller1;
    double bigger_or_smaller2;
    double combined_bigger_or_smaller1_2;
    double combined_bigger_or_smaller2_1; 
    char advanced_operation;
    char operation;
    cout << "Enter first number: ";
    cin >> user_number1;
    cout << "Enter second number: ";
    cin >> user_number2;
    cout << "Enter operation (+ for adding, - for subtracting, / for dividing, * for multiplicating, p for power, a for Advanced Mode): ";
    cin >> operation;
    if(tolower(operation) == '+') {
        double combined_plus;
        combined_plus = user_number1 + user_number2;
        cout << "Result: " << combined_plus << endl;
    }
    else if(tolower(operation) == '-') {
        double combined_minus;
        combined_minus = user_number1 - user_number2;
        cout << "Result: " << combined_minus << endl;
    }
    else if(tolower(operation) == '/') {
        double combined_divide;
        combined_divide = user_number1 / user_number2;
        cout << "Result: " << combined_divide << endl;
    }
    else if(tolower(operation) == '*') {
        double combined_multiply; 
        combined_multiply = user_number1 * user_number2;
        cout << "Result: " << combined_multiply << endl;
    } 
    else if(tolower(operation) == 'p') {
        double combined_power;
        combined_power = pow(user_number1, user_number2);
        cout << "Result: " << combined_power << endl;
    }
    else if(tolower(operation) == 'a') {
        cout << "Advanced Mode: Enter operation (r for square root, s for square, % for number to percentage, c for comparasion): ";
        cin >> advanced_operation;
        if(tolower(advanced_operation) == 'r') {
            cout << "Advanced Mode: Enter number 1: ";
            cin >> advanced_user_number1;
            sqrt_result = sqrt(advanced_user_number1); 
            cout << "Advanced Mode: Result: " << sqrt_result << endl;
            exit(0);
        }
        else if(tolower(advanced_operation) == 's') {
            cout << "Advanced Mode: Enter number 1: ";
            cin >> advanced_user_number1;
            double square;
            square = pow(advanced_user_number1, 2);
        }
        else if(tolower(advanced_operation) == '%') {
            cout << "Advanced Mode: Enter value (limits = 0 to 1): ";
            cin >> number_to_percentage_input;
            if(number_to_percentage_input > 1 or number_to_percentage_input < 0) {
                cout << "Advanced Mode: Your input was too high/too low (" << number_to_percentage_input << ")";
                exit(0);
            }
        }
        else if(tolower(advanced_operation) == 'c') {
            cout << "Advanced Mode: Enter first number: ";
            cin >> bigger_or_smaller1;
            cout << "Advanced Mode: Enter second number: ";
            cin >> bigger_or_smaller2;
            combined_bigger_or_smaller1_2 = bigger_or_smaller1 - bigger_or_smaller2;
            combined_bigger_or_smaller2_1  = bigger_or_smaller2 - bigger_or_smaller1;
            cout << "Advanced Mode: First number - Second number: " << combined_bigger_or_smaller1_2 << endl;
            cout << "Advanced Mode: Second number - First number: " << combined_bigger_or_smaller2_1 << endl;
            if(advanced_user_number1 > advanced_user_number2) {
                cout << "Advanced Mode: Bigger number: First number" << endl;
                cout << "Advanced Mode: Smaller number: Second number" << endl;
                exit(0);
            }
            else if(advanced_user_number2 > advanced_user_number1) {
                cout << "Advanced Mode: Bigger number: Second Number" << endl;
                cout << "Advanced Mode: Smaller number: First Number" << endl;
                exit(0);
            }
        }
        else {
            number_to_percentage = number_to_percentage_input * 100;
            cout << "Advanced Mode: Result: " << number_to_percentage << "%";
            exit(0);
        }
    }
}
