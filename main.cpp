#include <iostream>
#include "arraylist.h"
using namespace std;

int main() {
    ArrayList* list = new ArrayList();
    
    char option;
    int num = 0;
    int pos = 0;
    int sum = 0;

    while (option != 'x'){
        cout << "Option: ";
        cin >> option;

        switch(option){
            case 'a': 
                cout << "add: ";
                cin >> num;
                list->add(num);

                 cout << endl;
            break;

            case 'R':
                cout << "removeAt: ";
                cin >> pos;
                list->removeAt(pos);

                cout << endl;
            break;

            case 'g':
                list->get(pos);

                cout << endl;
            break;

            case 'A':
                cout << "add: ";
                cin >> num;
                cout << "pos: ";
                cin >> pos;
                list->addAt(num, pos);

                cout << endl;
            break;

            case 'r':
                cout << "remove: ";
                cin >> num;
                list->remove(num);

                cout << endl;
            break;

            case 'P':
                list->print();
                cout << endl;
            break;

            // Case Section 1
            case 'e':
                if (list->isEmpty()){
                    cout << "The list is empty";
                } else {
                    cout << "It is not empty.";
                }

                cout << endl;
            break;

            case 'c':
                cout << "The value you are looking for: ";
                cin >> num;
                if (list->contains(num)){
                    cout << "It contains " << num << endl;
                } else {
                    cout << "It does not contain " << num << endl;
                }
            break;

            case 'f':
                cout << "Value to find: ";
                cin >> num;
                pos = list->find(num);
                if (pos != -1){
                    cout << num << " found at position " << pos << endl;
                } else {
                    cout << num << " is not found." << endl;
                }
            break;

            case 'l':
                list->removeLast();
                list->print();
            break;

            case 'F':
                list->removeFirst();
                list->print();
            break;

            case 'L':
                list->removeAll();
                list->print();
            break;

            // Section 2
            case 'T':
                cout << "Term value: ";
                cin >> num;
                list->term(num);
                list->print();
            break;
            
            case 'S':
                cout << "Total sum: " << list->summation(sum) << endl;
            break;
            
            // Section 3
            case 'D':
                cout << "The value to have its duplicate remove: ";
                cin >> num;
                list->removeDuplicates(num);
                list->print();
            break;

            case 's':
                cout << "Enter value: ";
                cin >> num;
                list->shiftRight(num);
                list->print();
                break;

            case 'o':
                cout << "Enter value: ";
                cin >> num;
                list->shiftLeft(num);
                list->print();
                break;    

            default:
                
                break;
        }
    }
        
    return 0;
}