#include <bits/stdc++.h>

#include "List.h"

using namespace std;

int main(){
    int check = 0;
    List list;
    string str;
    while(1){
        system("cls");
        printf("1. Add to list.\n");
        printf("2. Add at the beginning of the list.\n");
        printf("3. Add at a certain position.\n");
        printf("4. Delete from list.\n");
        printf("5. Print list.\n");
        printf("6. Exit.\n");
        printf("Please choose an action from the above\n");
        scanf("%d", &check);
        if(check == 1){
            system("cls");
            printf("Enter new node's data: ");
            cin >> str;
            list.AddNode(str);
        }
        else if(check == 2){
            system("cls");
            list.PrintList();
            printf("Enter new node's data: ");
            cin >> str;
            list.AddAtBegin(str);
            list.PrintList();
            system("pause");
        }
        else if(check == 3){
            system("cls");
            list.PrintList();
            string cd;
            printf("\nWhich node would you like to add the new node after it?\n");
            cin >> cd;
            printf("Enter new node's data: ");
            cin >> str;
            list.AddAtGivenPostion(str, cd);
        }
        else if(check == 4){
            system("cls");
            list.PrintList();
            printf("Enter node's data to delete: ");
            cin >> str;
            list.DelNode(str);
            list.PrintList();
            system("pause");
        }
        else if(check == 5){
            system("cls");
            list.PrintList();
            system("pause");
        }
        else if(check == 6){
            return 0;
        }
    }
    return 0;
}
