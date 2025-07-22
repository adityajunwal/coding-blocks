#include <iostream>
using namespace std;

class ArrayList{
    private:
        int* ptr;
        int count;
    public:
        ArrayList () {
            ptr = new int;
            count = 0;
        }
        void insert(int val){
            *(ptr+count) = val;
            count++;
        }
        int valueAt(int index){
            return *(ptr + index);
        }
        int length(){
            return count;
        }
        void display(int i=0){
            if (i < count){
                cout << *(ptr+i) << " "; 
                display(i+1);
                return;
            } 
            cout << endl;
            return; 
        }
};

int main(){
    ArrayList list;
    for (int i=0; i<3; i++){
        list.insert(i+10);
    }
    for (int i=0; i<3; i++){
        cout << list.valueAt(i) << " ";
    } cout << endl;
    cout << list.length() << endl;
    list.display();
    cout << "Hello World";
}
