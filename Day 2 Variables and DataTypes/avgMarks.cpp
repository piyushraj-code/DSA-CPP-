#include <iostream>
using namespace std;
int main(){
    int eng;
    int math;
    int sci;
    //Input eng marks;
    cout << "Enter your english marks: ";
    cin >> eng;
    // Input math marks
    cout << "Enter your math marks: ";
    cin >> math;
    // Input science marks
    cout << "Enter your science makrs: ";
    cin >> sci;
    float avg = (math+sci+eng)/3.0;
    cout << "Your average marks is: " << avg << endl;
}