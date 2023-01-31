#include <iostream>
using namespace std;
int main()
{
    int quant;
    int choice;
    // intializing the quantity
    int QuanRooms = 0, QuanPasta = 0, QuanBurger = 0, QuanNoodles = 0, QuanShakes = 0, QuanChicken = 0;
    // sold rooms and dishes
    int SoldRooms = 0, Soldpasta = 0, SoldBurger = 0, SoldNoodles = 0, SoldShakes = 0, SoldChicken = 0;
    // total items
    int Total_rooms = 0, Total_pasta = 0, Total_Burger = 0, Total_noodels = 0, Total_shakes = 0, Total_chicken = 0;
    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms Available:";
    cin >> QuanRooms;
    cout << "\n Quantity of pasta :";
    cin >> QuanPasta;
    cout << "\n Quantity of Burger :";
    cin >> QuanBurger;
    cout << "\n Quantity of Noodles :";
    cin >> QuanNoodles;
    cout << "\n Quantity of Shakes :";
    cin >> QuanShakes;
    cout << "\n Quantity of Chicken :";
    cin >> QuanChicken;

    m:

    cout << "\n\t\t\t Please select from the menu options";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shakes";
    cout << "\n6) Chicken";
    cout << "\n7) Information regarding sales";
    cout << "\n8)Exit";

    cout << "\n\nPlease enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the Rooms you Want :";
        cin >> quant;
        if (QuanRooms - SoldRooms >= quant)
        {
            SoldRooms = SoldRooms + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "Room/Rooms have been alloted to you";
        }
        else
            cout << "\n\t only " << QuanRooms - SoldRooms << "Rooms Remaining in the hotel";
        break;
    case 2:
        cout << "\n\n Enter the Quantity of pasta :";
        cin >> quant;
        if (QuanPasta - Soldpasta >= quant)
        {
            Soldpasta = Soldpasta + quant;
            Total_pasta = Total_pasta + quant * 250;
            cout << "\n\n\t\t" << quant << "PAsta is the order";
        }
        else
            cout << "\n\t only " << QuanPasta - Soldpasta << "Pasta Remaining ";
        break;
    case 3:
        cout << "\n\n Enter the Quantity of Burger :";
        cin >> quant;
        if (QuanBurger - SoldBurger >= quant)
        {
            SoldBurger = SoldBurger + quant;
            Total_Burger = Total_Burger + quant * 180;
            cout << "\n\n\t\t" << quant << "Burger is the order";
        }
        else
            cout << "\n\t only " << QuanBurger - SoldBurger << "Burger  Remaining ";
        break;
    case 4:
        cout << "\n\n Enter the Quantity of Noodles :";
        cin >> quant;
        if (QuanNoodles - SoldNoodles >= quant)
        {
            SoldNoodles = SoldNoodles + quant;
            Total_noodels = Total_noodels + quant * 200;
            cout << "\n\n\t\t" << quant << "Noodles is the order";
        }
        else
            cout << "\n\t only " << QuanNoodles - SoldNoodles << "Noodles  Remaining ";
        break;
         case 5:
        cout << "\n\n Enter the Quantity of Shakes :";
        cin >> quant;
        if (QuanShakes - SoldShakes >= quant)
        {
            SoldShakes = SoldShakes + quant;
            Total_shakes = Total_shakes + quant * 200;
            cout << "\n\n\t\t" << quant << "shakes is the order";
        }
        else
            cout << "\n\t only " << QuanShakes - SoldShakes << "Shakes  Remaining ";
        break;
        case 6:
        cout << "\n\n Enter the Quantity of Chicken :";
        cin >> quant;
        if (QuanChicken - SoldChicken >= quant)
        {
            SoldChicken = SoldChicken + quant;
            Total_chicken = Total_chicken + quant * 200;
            cout << "\n\n\t\t" << quant << "Chicken is the order";
        }
        else
            cout << "\n\t only " << QuanChicken - QuanChicken << "Chicken  Remaining ";
        break;

        case 7:
        cout<<"\n\t\tDeatails of sales and collection";
        cout<<"\n\n Number rooms we had: "<<QuanRooms;
        cout<<"\n\n Number rooms we gave for rent : "<<SoldRooms;
        cout<<"\n\n Remaining rooms ="<<QuanRooms-SoldRooms;
        cout<<"\n\n Total rooms collection for the day:"<<Total_rooms;

      cout<<"\n\n Number pasta we had: "<<QuanPasta;
        cout<<"\n\n Number pasta we gave : "<<Soldpasta;
        cout<<"\n\n Remaining pasta ="<<QuanPasta-Soldpasta;
        cout<<"\n\n Total pasta collection for the day:"<<Total_pasta;

         cout<<"\n\n Number burgers we had: "<<QuanBurger;
        cout<<"\n\n Number burgers we sold  : "<<SoldBurger;
        cout<<"\n\n Remaining burgers ="<<QuanBurger-SoldBurger;
        cout<<"\n\n Total burger collection for the day:"<<Total_Burger;

             cout<<"\n\n Number Noodles we had: "<<QuanNoodles;
        cout<<"\n\n Number Noodles we sold  : "<<SoldNoodles;
        cout<<"\n\n Remaining Noodles ="<<QuanNoodles-SoldNoodles;
        cout<<"\n\n Total Noodles collection for the day:"<<Total_noodels;
         
          cout<<"\n\n Number shakes we had: "<<QuanShakes;
        cout<<"\n\n Number shakes we sold  : "<<SoldShakes;
        cout<<"\n\n Remaining shakes ="<<QuanShakes-SoldShakes;
        cout<<"\n\n Total shakes collection for the day:"<<Total_shakes;

 cout<<"\n\n Number chickens we had: "<<QuanChicken;
        cout<<"\n\n Number chickens we sold  : "<<SoldChicken;
        cout<<"\n\n Remaining chickens ="<<QuanChicken-SoldChicken;
        cout<<"\n\n Total chickens collection for the day:"<<Total_chicken;

case 8:
exit(0);

    default:
        cout<<"\n please enter the above mentioned number";


    }
    goto m;   
    

}