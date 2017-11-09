#include <iostream>

using namespace std;

int main()
{
    bool bCurious;
    bool bLikeDanger;
    bool bAfraidOfSpiders;

    cout << "Любопитен ли сте ? [ 0 - не, 1 - да]: ";
    cin >> bCurious;
    cout << "Обичате ли неприятности ? [ 0 - не, 1 - да]: ";
    cin >> bLikeDanger;
    cout << "Страх ли ви е от паяци ? [ 0 - не, 1 - да]: ";
    cin >> bAfraidOfSpiders;

    if(   (!bCurious && !bLikeDanger && !bAfraidOfSpiders)
       || (!bCurious &&  bLikeDanger &&  bAfraidOfSpiders)
          )
    {
        cout << "Вашето място е в Слидерин\n";
    }
    else if(   ( bCurious && !bLikeDanger &&  bAfraidOfSpiders)
            || (!bCurious &&  bLikeDanger && !bAfraidOfSpiders)
               )
    {
        cout << "Вашето място е в Хафълпаф\n";
    }
    else if(   (!bCurious && !bLikeDanger &&  bAfraidOfSpiders)
            || ( bCurious &&  bLikeDanger &&  bAfraidOfSpiders)
               )
    {
        cout << "Вашето място е в Рейвънклоу\n";
    }
    else
    {
        cout << "Вашето място е в Грифиндор\n";
    }

    return 0;
}
