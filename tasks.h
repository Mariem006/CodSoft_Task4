#ifndef TASKS_H
#define TASKS_H
#include <string>

using namespace std;

class tasks
{
private:
    string name;
    string finish;
public:
    void get_task(string taskname);
    void put_name();
    void completed();
    void put_task();
    tasks();
};
#endif // TASKS_H
