#include <iostream>
#include <tasks.h>
#include <limits>
#include <sstream>

void failure(int &input){
    while(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"Enter only a number...Try again!"<<endl;
            cin>>input;
        }
}

using namespace std;

int main(){
    int input, n=0, num=100;
    string name;
    tasks task [num];
    cout<<"Hello! ";

    do{
        cout<<endl<<"Enter a number from 1 to 5 of what you want to perform: "<<endl;
        cout<<"1. Add task."<<endl;
        cout<<"2. Remove task."<<endl;
        cout<<"3. Mark a task as completed"<<endl;
        cout<<"4. View your tasks."<<endl;
        cout<<"5. End the program."<<endl;
        cin>>input;

        failure(input);

        if(input>num)
        {
            cout<<"The to do list is full"<<endl;
            cout<<"Try again"<<endl;
            cin>>input;
        }
        cin.ignore();

        switch(input){
        case 1:
            cout<<"Enter the task"<<endl;
            getline(cin,name);
            task[n].get_task(name);
            n++;
            break;
        case 2:
            cout<<"which task do you want to delete?"<<endl<<" Choose a number from the list"<<endl;
            for(int i=0; i<n;i++)
            {
                cout<<i+1<<". ";
                task[i].put_name();
                cout<<endl;
            }
            cin>>input;
            failure(input);
            cin.ignore();
            for(int i=input-1; i<n-1; i++)
            {
                task[i]=task[i+1];
            }
            n--;

            break;
        case 3:
            cout<<"Which task did you complete from these?(Choose a number)"<<endl;
            if(n==0)
            {
                cout<<"No tasks to show."<<endl;
            }
            for(int i=0; i<n; i++)
            {
                cout<<i+1<<". ";
                task[i].put_name();
                cout<<endl;
            }
            cin>>input;
            failure(input);
            cin.ignore();
            task[input-1].completed();
            break;
        case 4:
            if(n==0){
                cout<<"No tasks to show."<<endl;
            }
            for(int i=0; i<n;i++)
            {
                task[i].put_task();
                cout<<endl;

            }
            break;
        }
    }while(input!=5);

    cout<<"Thank you for using our Program. Bye!"<<endl;

    return 0;
}
