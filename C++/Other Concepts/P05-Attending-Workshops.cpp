//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
#include <algorithm>

struct Workshops{
    int start;
    int duration;
    int end;
};

struct Available_Workshops{
    int n;
    Workshops *workshopList;
};

Available_Workshops* initialize(int start_time[], int duration[], int n){
    Available_Workshops *work = new Available_Workshops();
    work->n = n;
    work->workshopList = new Workshops[n];
    for(int i = 0; i < n; ++i){
        work->workshopList[i].start = start_time[i];
        work->workshopList[i].duration = duration[i];
        work->workshopList[i].end = start_time[i] + duration[i];
    }
    return work;
}

bool compare(Workshops& A, Workshops& B){
    return A.end < B.end;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr->workshopList, ptr->workshopList + ptr->n, compare);
    int ans = 1, end = ptr->workshopList[0].end;
    for(int i = 1; i < ptr->n; ++i){
        if(ptr->workshopList[i].start >= end){
            ++ans;
            end = ptr->workshopList[i].end;
        }
    }
    return ans;
}