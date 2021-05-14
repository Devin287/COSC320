#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "d_pqueue.h"
#include "preqrec.h"

int main(){
    srand(time(NULL));
    miniPQ<procReqRec, less<procReqRec>> mpq;

    mpq.push(procReqRec("Process G", rand()% 40));
    mpq.push(procReqRec("Process J", rand()% 40));
    mpq.push(procReqRec("Process F", rand()% 40));
    mpq.push(procReqRec("Process B", rand()% 40));
    mpq.push(procReqRec("Process C", rand()% 40));
    mpq.push(procReqRec("Process E", rand()% 40));
    mpq.push(procReqRec("Process H", rand()% 40));
    mpq.push(procReqRec("Process D", rand()% 40));
    mpq.push(procReqRec("Process I", rand()% 40));
    mpq.push(procReqRec("Process A", rand()% 40));

    while(mpq.empty() != true){
        cout << mpq.top();
        mpq.pop();
    }

    return 0;
}