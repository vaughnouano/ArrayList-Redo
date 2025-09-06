#include <iostream>
#include "list.h"
#define INITIAL_CAPACITY 5
using namespace std;

class ArrayList : public List {
    int* array;
    int index;
    int length;

    public:
        ArrayList() {
            array = new int[INITIAL_CAPACITY];
            index = 0;
            length = INITIAL_CAPACITY;
        }

        ArrayList(int size) {
            array = new int[size];
            index = 0;
            length = size;
        }

        void add(int num) {
            if(index == length) {
                cout << "Array is full, cannot add more elements." << endl;
                return;
            }
            array[index++] = num;
        }

        void removeAt(int pos) {
            if(pos < 0 || pos >= index) {
                cout << "Index out of bounds." << endl;
                return;
            }
            
            for (int i = pos + 1; i < index; i++) {
                array[i - 1] = array[i];
            }
            index--;
        };

        int get(int pos) {
            if(pos < 0 || pos >= index) {
                cout << "Index out of bounds." << endl;
                return -1;
            }
            return array[pos];
        };

        void addAt(int num, int pos) {
            if(pos < 1 || pos > index+1 || index == length) return;

            for(int i=index-1; i >= pos-1; i--) {
                array[i+1] = array[i];
            }

            array[pos-1] = num;
            index++;
        };

        int remove(int num) {
            int pos = -1;

            for(int i=0; i<index; i++) {
                if(array[i] == num) {
                    pos = i;
                    break;
                }
            }

            if(pos == -1) return pos;

            for(int i=pos; i<index-1; i++) {
                array[i] = array[i + 1];
            }
            index--;

            return pos + 1;
        };

        void print() {
            for (int i = 0; i < index; i++) {
                cout << array[i] << " ";
            }
            if (index == 0){
                cout << "The list is empty." << endl;
            }
            cout << endl;
        };

        // Section 1;
        bool isEmpty(){
            if (index == 0){
                return true;
            }
            return false;
        };

        bool contains(int num){
            for (int i=0; i<index; i++){
                if (array[i] == num){
                    return true;
                    break;
                }
            }
                return false;
        };

        int find(int num){
            for (int i=0; i<index; i++){
                if (array[i] == num){
                    return i+1;
                    break;
                }
            }

            return -1;
        };

        int removeLast(){
            return index--;
        }

        int removeFirst(){
            int first = array[0];
            removeAt(0);
            return first;
        }

        int removeAll(){
            int i=0;
            while (i<index){
                removeAt(i);
            } i++;

            return 0;
        }

        // Section 2
        int term(int num){
            for (int i=0; i<index; i++){
                array[i] = num + array[i];
            }

            return 0;
        }

        int summation(int sum){
            sum = 0;
            for (int i=0; i<index; i++){
                sum += array[i];
            }
            return sum;
        }

        // Section 3;
        int removeDuplicates(int num){
            int ctr = 0;

            for (int i=0; i<index; i++){
                if (array[i] == num){
                    ctr++; 
                } 
                
                if (ctr > 1){
                    removeAt(i);
                } else {
                    cout << "No duplicates found." << endl;
                }
            }

            return 0;
        }

        // [1,2,3] to [3,1,2]

        int shiftRight(int k){

            if (k > index){
                k = k % index;
            }

            for (int i=0; i<k; i++){
                int last = array[index-1];
                for (int j=index-1; j>0; j--){
                    array[j] = array[j-1];
                }
                array[0] = last;
            }

            return 0;
        }

        // insert int shiftLeft here
        int shiftLeft(int k){

            if(k > index){
                k = k % index;
            }

            for (int i=0; i<k; i++){
                int first = array[0];
                for (int j=0; j<index - 1 ; j++){
                    array[j] = array[j+1];
                }
                array[index-1] = first;
            }

            return 0;
        }
};