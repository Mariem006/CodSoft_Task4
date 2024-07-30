#include "Tasks.h"
#include <iostream>

tasks::tasks()
{
    finish="Pending";
}

void tasks:: get_task(string taskname){
    name=taskname;
}

void tasks:: put_name(){
    cout<<name;
}

void tasks:: completed(){
    finish="Completed";
}


void tasks:: put_task(){
    cout<<name<<" ("<<finish<<")";
}

