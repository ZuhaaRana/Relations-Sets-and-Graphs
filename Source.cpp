#include"GRAPHS.h"
int main()
{
    CYCLES C(4);
    
    BIPARTITE B;
    EULER_PATH E(5);
    PRIMS P;
    KRUSKALS K;

    int choice;
    while (1)
    {
        cout << "\n\n\tMAIN MENU\n\n";
        cout << "Enter your choice : \n\n";
        cout << "1.Total cycles in graph.\n2.Bipartite or complete bipartite.\n";
        cout << "3.Euler circuit or Euler path.\n4.Prims.\n5.Kruskals.\n6.Exit\n\n";
        cin >> choice;
        if (choice == 1)
        {
            C.READ_DATA();
            if (C.COUNT_CYCLES())
            {
                cout << "\nYes, Graph given graph contains cycle." << endl << "\nTotal cycles : " << C.cycleNumber << endl;
            }
            else {
                cout << "Given graph has no cycles." << endl;
            }
        }
        else if (choice == 2)
        {
            B.READ_DATA();
            B.DISPLAY_RESULT();

        }
        else if (choice == 3)
        {
            E.READ_DATA();
            E.DISPLAY_EULER_PATH();
        }
        else if (choice == 4)
        {
            P.READ_DATA();
            P.SPANNING_TREE();
        }
        else if (choice == 5)
        {
            K.READ_DATA();
            K.MST();
        }
        else if (choice == 6)
        {
            return 0;
        }
    }
    return 0;
}

