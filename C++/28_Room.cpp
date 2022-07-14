
#include <iostream>
using namespace std;
class room{
public:
    int l, b, h;
    int area()
    {
        return l * b;
    }
    int volume()
    {
        return l * b * h;
    }
    void displayData()
    {
        cout << "\n";
        cout << "the area of the room is: " << area() << "\n";
        cout << "the volume of the room is: " << volume();
    }
};
void EnterData(room &room_no){
    cout << "Enter the length of the room: ";
    cin >> room_no.l;
    cout << "Enter the breadth of the room: ";
    cin >> room_no.b;
    cout << "Enter the height of the room: ";
    cin >> room_no.h;
}
int main(){
    int n;
    cout << "Enter the no. of rooms you want: ";
    cin >> n;
    room room[n];
    for (int i = 0; i < n; i++){
        cout << "\nEnter Data for Room no." << i + 1 << "\n\n";
        EnterData(room[i]);
        cout << "\n";
        cout << "\nDisplaying data for Room no." << i + 1 << "\n";
        room[i].displayData();
        cout << "\n";
    }
    return 0;
}