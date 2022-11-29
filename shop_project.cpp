#include <iostream>
using namespace std;
int main()
{
    char startValue;
    char choiceAgain;
    float onlineShopping(void); // prototype
    cout << "Please press  s to start to shopping" << endl;
start:
    cin >> startValue;
startLevel:
    if (startValue == 's' || startValue == 'S')
    {
        float totalAmount = onlineShopping();
        cout << "Total billAmount is " << totalAmount << endl;
    shopAgain:
        cout << "Do you want shopping again,'y or n" << endl;
        cin >> choiceAgain;
        if (choiceAgain == 'y' || choiceAgain == 'Y')
        {
            goto startLevel;
        }
        else if (choiceAgain == 'n' || choiceAgain == 'N')
        {
            cout << "Thanks for shopping" << endl;
        }
        else
        {
            cout << "you have entered wong option,please type again" << endl;
            goto shopAgain;
        }
    }
    else
    {
        cout << "You have entred wrong key,please enter s" << endl;
        goto start;
    }
}
float onlineShopping()
{
    char choice;
    char item;
    float billAmount = 0;
    int quantity;
itemLevel:
    cout << "Welcome to online shopping" << endl;
    cout << "Follow the instruction" << endl;
    cout << "(1) Please enter m to order  mobile phones" << endl;
    cout << "(2) Please enter o to order  ornaments" << endl;
    cout << "(3) Please enter d to order  desktop" << endl;
    cout << "(4) Please enter t to order  t.v" << endl;
    cin >> choice;

    // ***************mobile******************
    if (choice == 'm' || choice == 'M')
    {
    mobileLevel:
        cout << "Mobile details" << endl;
        cout << "(1) Apple => Price : 40000" << endl;
        cout << "(2) Vivo=> Price : 30000" << endl;
        cout << "(3) Oppo => Price : 20000" << endl;
        cout << "(4) Redmi => Price : 18000" << endl;
        cout << "(5) Realme => Price : 17000" << endl;

        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '2')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 30000;
        }
        else if (item == '3')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 20000;
        }
        else if (item == '4')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 18000;
        }
        else if (item == '5')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 25000;
        }
        else
        {
            cout << "You have entred wrong option ,please type again" << endl;
            goto mobileLevel;
        }
    }

    // ***************desktop******************
    else if (choice == 'd' || choice == 'D')
    {
    desktopLevel:
        cout << "Desktop details" << endl;
        cout << "(1) Apple => Price : 40000" << endl;
        cout << "(2) Vivo=> Price : 30000" << endl;
        cout << "(3) Oppo => Price : 20000" << endl;
        cout << "(4) Redmi => Price : 18000" << endl;
        cout << "(5) Realme => Price : 17000" << endl;

        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '2')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 30000;
        }
        else if (item == '3')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 20000;
        }
        else if (item == '4')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 18000;
        }
        else if (item == '5')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 25000;
        }
        else
        {
            cout << "You have entred wrong option ,please type again" << endl;
            goto desktopLevel;
        }
    }
    // ***************t.v******************
    else if (choice == 't' || choice == 'T')
    {
    tvLevel:
        cout << "Tv details" << endl;
        cout << "(1) Apple => Price : 40000" << endl;
        cout << "(2) Vivo=> Price : 30000" << endl;
        cout << "(3) Oppo => Price : 20000" << endl;
        cout << "(4) Redmi => Price : 18000" << endl;
        cout << "(5) Realme => Price : 17000" << endl;

        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 40000;
        }
        else if (item == '2')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 30000;
        }
        else if (item == '3')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 20000;
        }
        else if (item == '4')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 18000;
        }
        else if (item == '5')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 25000;
        }
        else
        {
            cout << "You have entred wrong option ,please type again" << endl;
            goto tvLevel;
        }
    }
    // ***************ornaments******************
    else if (choice == 'o' || choice == 'O')
    {
    ornamentLevel:
        cout << "Ornament details" << endl;
        cout << "(1) earing => Price : 400" << endl;
        cout << "(2) necklace=> Price : 3000" << endl;
        cout << "(3) toe ring => Price : 2000" << endl;
        cout << "(4) ring => Price : 1800" << endl;
        cout << "(5) anklet => Price : 1700" << endl;

        cout << "please enter your choice" << endl;
        cin >> item;
        if (item == '1')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 400;
        }
        else if (item == '2')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 3000;
        }
        else if (item == '3')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 2000;
        }
        else if (item == '4')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1800;
        }
        else if (item == '5')
        {
            cout << "Enter quantity " << endl;
            cin >> quantity;
            billAmount = billAmount + quantity * 1700;
        }
        else
        {
            cout << "You have entred wrong option ,please type again" << endl;
            goto ornamentLevel;
        }
    }
    else
    {
        cout << "You have entred wrong option ,please type again" << endl;
        goto itemLevel;
    }

    return billAmount;
}